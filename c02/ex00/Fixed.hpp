/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 14:20:09 by arthur            #+#    #+#             */
/*   Updated: 2021/07/28 14:44:17 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
	static const int _bits = 8;
	int _value;

public:
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed & rhs);
	Fixed & operator=(Fixed & rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};