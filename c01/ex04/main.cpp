/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 11:49:10 by arthur            #+#    #+#             */
/*   Updated: 2021/07/23 19:18:24 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <fcntl.h>
#include <filesystem>


#include <cstdio>
#include <cstring>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <sys/stat.h>

namespace tool
{
	std::string	read_file(std::ifstream & ifs)
	{
		std::string	buf;
		std::string	tmp;
		int			i;

		i = 0;
		if (ifs.fail())
		{
			std::cerr << "Somethings wrong with ifstream !" << std::endl;
			exit(1);
		}
		while (std::getline(ifs, tmp))
		{
			buf += tmp + '\n';
			i++;
		}
		if (tmp.size() != 0)
			buf = buf.substr(0, buf.size() - 1);
		return (buf);
	}

	void		write_file(std::string buf, char *filename)
	{
		std::ofstream	ofs;

		ofs.open(filename);
		if (ofs.fail())
		{
			std::cerr << "Somethings wrong with ofstream !" << std::endl; 
			exit(1);
		}
		ofs << buf;
	}


	bool		replaceAll(std::string & subject, std::string what, std::string with)
	{
		int			i;
		size_t		e;
		std::string	res;
	
		i = 0;
		while(subject[i])
		{
			e = 0;
			while (subject[i + e] == what[e] && subject[i + e] && what[e])
				e++;
			if (e == what.size())
			{
				res += with;
				i += what.size();
			}
			else
			{
				res += subject[i];
				i++;	
			}
		}
		if (res == subject)
			return (false);
		subject = res;
		return (true);
	}

	bool		empty_str(char *str)
	{
		int	i;

		i = 0;
		while(str[i])
			i++;
		return (i > 0 ? true : false);
	}
};

int main(int argc, char *argv [])
{
	
	std::ifstream	ifs;
	std::string		buf;
	struct stat		s;

	if (argc != 4)
	{
		std::cerr << "There isn't 3 args: " << argc -1 << std::endl;
		return (1);	
	}
	if (!tool::empty_str(argv[2]) || !tool::empty_str(argv[3]))
	{
		std::cerr << "Some args's string is empty and it cannot be !" << std::endl;
		return (1);
	}
	stat(argv[1], &s);
	if (S_ISDIR(s.st_mode))
	{
		std::cerr << "Cannot open a folder !" << std::endl;
		return (1);
	}
	ifs.open(argv[1]);
	if (ifs.fail())
	{
		std::cerr << "Fail opening file !" << std::endl;
		return (1);
	}
	buf = tool::read_file(ifs);
	if (tool::replaceAll(buf, argv[2], argv[3]))
	{
		tool::write_file(buf, argv[1]);
		std::cout << "Change apply !" << std::endl;
	}
	else
	{
		std::cout << "Nothing change..." << std::endl;
		return (1);
	}
	return (0);
}