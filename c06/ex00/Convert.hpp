#ifndef __CONVERT_H__
#define __CONVERT_H__

#include <iostream>
#include <limits.h>
#include <iostream>
#include <cmath>

#define ERR "\x1B[31m"
#define DEF "\033[0m"

class Convert
{
	private:
		long double _value;

	public:
		Convert(void);
		Convert(std::string value);
		Convert(const Convert & rhs);
		~Convert(void);
		Convert & operator=(const Convert & rhs);
		
		long double getRawValue(void) const;

		void toInt(void) const;
		void toChar(void) const;
		void toDouble(void) const;
		void toFloat(void) const;
};

std::ostream & operator<<(std::ostream & o, const Convert & rhs);

#endif // __CONVERT_H__