#!/bin/bash

GREEN='\033[0;32m'
RED='\033[0;31m'
NO='\033[0m'
YELLOW='\033[1;33m'


ok ()
{
	printf "${GREEN}[\"OK\"]\n${NO}"
	echo -e "---- SUCESS ---\n" >> test.log
}

ko ()
{
	printf "${RED}[\"KO\"]\n${NO}"
	printf "Error code $1\n" >> test.log
	echo -e "--- FAIL ----\n" >> test.log
}

out ()
{
	printf "${YELLOW}[\"TIMEOUT\"]\n${NO}"
	printf "Error code $1\n" >> test.log
	echo -e "--- FAIL ----\n" >> test.log
}

check ()
{
	CODE=$?

	if [ $CODE -eq $1 ]; then
		ok
	else
		if [ $CODE -eq 143 ]; then
			out $CODE
		else
			ko $CODE
		fi;
	fi;
}

timeout_check ()
{
	(
		DATE=$(date +%s)
		COUNT=0 
		while (( "$COUNT" < "4" )); do
			sleep 1
			COUNT=$(expr $(date +%s) - $DATE)
			pgrep replace > /dev/null
			if [ $? -eq 1 ]; then
				return 1
			fi;
		done
		pkill replace
	) &  > /dev/null
}

echo -e "[TESTER REPLACE CPP]\nuse --debug for keep log\n"


cat test.log > /dev/null 2> /dev/null
if [[ "$?" == 0 ]]; then 
	rm -rf test.log
fi;

SUCCESS=0

printf "TEST -1 | Makefile check | "
make > /dev/null 2> /dev/null
if  [[ "$?" != 0 ]]; then
	printf "${RED}[\"KO\"]${NO}"
else
	SUCCESS=$(expr $SUCCESS + 1)
	printf "${GREEN}[\"OK\"]"
fi;
make clean > /dev/null 2> /dev/null
if  [[ "$?" != 0 ]]; then
	printf "${RED}[\"KO\"]${NO}"
else
	SUCCESS=$(expr $SUCCESS + 1)
	printf "${GREEN}[\"OK\"]"
fi;
make fclean > /dev/null 2> /dev/null
if  [[ "$?" != 0 ]]; then
	printf "${RED}[\"KO\"]${NO}"
else
	SUCCESS=$(expr $SUCCESS + 1)
	printf "${GREEN}[\"OK\"]"
fi;
make re > /dev/null 2> /dev/null
if  [[ "$?" != 0 ]]; then
	printf "${RED}[\"KO\"]${NO}\n"
else
	SUCCESS=$(expr $SUCCESS + 1)
	printf "${GREEN}[\"OK\"]\n${NO}"
fi;

if [[ "$SUCCESS" != 4 ]]; then
	echo "Makefile invalid, compilation fail, please fix it"
	exit 1
fi;


###################################################################

printf "TEST 0 | no args | "
echo "TEST 0 | ./replace" >> test.log
timeout_check
(
	./replace >> test.log 2>> test.log
) &
wait $!
check 1

###################################################################

printf "TEST 1 | wrong args number | "
echo "TEST 1 | ./replace bla bla bla bla" >> test.log
timeout_check
(
	./replace bla bla bla bla >> test.log 2>> test.log
) & 
wait $!
check 1

###################################################################

printf "TEST 2 | invalid file | "
echo "TEST 2 | ./replace file salut salut" >> test.log
timeout_check 
(
	./replace file salut salut >> test.log 2>> test.log
) &
wait $!
check 1

###################################################################

printf "TEST 3 | basic replace | "
echo "salut tout le monde c'est vraiment cool de coder ensemble" > file_1
echo "salut tout le monde c'est vraiment cool de coder ensemble" > file_2
echo "TEST 3 | ./replace file_1 salut bye; sed -i \"s/salut/bye/g\" file_2" >> test.log
timeout_check
(
	./replace file_1 salut bye >> test.log 2>> test.log
) &
wait $!
sed -i -e "s/salut/bye/g" file_2
diff file_1.replace file_2 >> test.log
check 0

###################################################################

printf "TEST 4 | empty string | "
echo "TEST 4 | ./replace file_1 \"\" \"\"" >> test.log
timeout_check
(
	./replace file_1 "" "" >> test.log 2>> test.log
) &
wait $!
check 1

###################################################################

printf "TEST 5 | complexe string 1 | "
cat main.cpp > file_1
cat main.cpp > file_2
echo "TEST 5 | ./replace file_1 \"std::\" \"putain_mec_c_cool::\"; sed -i \"s/std::/putain_mec_c_cool::/g\" file_2" >> test.log
timeout_check
(
	./replace file_1 "std::" "putain_mec_c_cool::" >> test.log 2>> test.log
) & 
wait $!
sed -i -e "s/std::/putain_mec_c_cool::/g" file_2
diff file_1.replace file_2 >> test.log
check 0

###################################################################

printf "TEST 6 | complexe string 2 | "
man sed | col -b > file_1
man sed | col -b > file_2
echo "TEST 6 | ./replace file_1 \"sed\" \"replace\"; sed -i \"s/sed/replace/g\" file_2" >> test.log
timeout_check
(
	./replace file_1 "sed" "replace" >> test.log 2>> test.log
) & 
wait $!
sed -i -e "s/sed/replace/g" file_2
diff file_1.replace file_2 >> test.log
check 0

###################################################################

printf "TEST 7 | re run same test | "
echo "TEST 7 | ./replace file_1 \"sed\" \"replace\"; sed -i \"s/sed/replace/g\" file_2" >> test.log
timeout_check
(
	./replace file_1 "sed" "replace" >> test.log 2>> test.log
) & 
wait $!
sed -i -e "s/sed/replace/g" file_2
diff file_1.replace file_2 >> test.log
check 0

###################################################################

printf "TEST 8 | weird test | "
echo "\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"" > file_1
echo "\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"" > file_2

echo "TEST 8 | ./replace file_1 \"\"\" \"bon mec arrete la\"; sed -i \"s/\"/bon mec arrete la/g\" file_2" >> test.log
timeout_check
(
	./replace file_1 "\"" "bon mec arrete la" >> test.log 2>> test.log
) & 
wait $!
sed -i "s/\"/bon mec arrete la/g" file_2
diff file_1.replace file_2 >> test.log
check 0

###################################################################

printf "TEST 9 | use a directory | "
echo "TEST 9 | ./replace desole salut salut" >> test.log
mkdir desole
timeout_check
(
	./replace desole salut salut >> test.log 2>> test.log
)
wait $!
check 1
rm -rf desole
rm -rf file_1.replace

if [[ "$1" != "--debug" ]]; then
	rm -rf file_1
	rm -rf file_2
	rm -rf test.log
fi;