/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurtinseau <arthurtinseau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 10:27:04 by arthurtinse       #+#    #+#             */
/*   Updated: 2021/08/04 10:36:08 by arthurtinse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ************************************************************************** */

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int value)
{
	_value = value;
	_value <<= _bits;
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float value)
{
	_value = roundf((1 << _bits) * value);
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & rhs)
{
	*this = rhs;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed & Fixed::operator=(const Fixed & rhs)
{
	_value = rhs.getRawBits();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, const Fixed & rhs)
{
	o << rhs.toFloat();
	return (o);
}



/* ************************************************************************** */

int		Fixed::toInt(void) const
{
	return (_value >> _bits);
}

float	Fixed::toFloat(void) const
{
	return ((float)_value / (float)(1 << _bits));
}

int		Fixed::getRawBits(void) const
{
	return (_value);
}

void Fixed::setRawBits(const int raw)
{
	_value = raw;
	return;
}

