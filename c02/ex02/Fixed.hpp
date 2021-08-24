/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurtinseau <arthurtinseau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 10:27:00 by arthurtinse       #+#    #+#             */
/*   Updated: 2021/08/04 10:28:33 by arthurtinse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cmath>

class Fixed
{
private:
	static const int _bits = 8;
	int _value;

public:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed & rhs);
	virtual ~Fixed(); 

	Fixed & operator=(const Fixed & rhs);
	Fixed & operator++(void);
	Fixed	operator++(int);
	Fixed &	operator--(void);
	Fixed 	operator--(int);

	Fixed	operator*(const Fixed & rhs);
	Fixed	operator+(const Fixed & rhs);
	Fixed	operator-(const Fixed & rhs);
	Fixed	operator/(const Fixed & rhs);
	
	bool	operator<(const Fixed & rhs);
	bool	operator>(const Fixed & rhs);
	bool	operator>=(const Fixed & rhs);
	bool	operator<=(const Fixed & rhs);
	bool	operator==(const Fixed & rhs);
	bool	operator!=(const Fixed & rhs);

	void	setRawBits(int const raw);

	int		toInt(void) const;
	float	toFloat(void) const;
	int		getRawBits(void) const;

	static	const Fixed & min(const Fixed & lhs, const Fixed & rhs);
	static	const Fixed & max(const Fixed & lhs, const Fixed & rhs);

	static	Fixed & min(Fixed & lhs, Fixed & rhs);
	static	Fixed & max(Fixed & lhs, Fixed & rhs);
};

std::ostream & operator<<(std::ostream & o, const Fixed & rhs);