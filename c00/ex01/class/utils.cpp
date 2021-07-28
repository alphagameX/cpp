/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 00:19:58 by arthur            #+#    #+#             */
/*   Updated: 2021/07/20 00:30:27 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.hpp"

namespace utils
{
	void	strtoupper(std::string & str)
	{
		int i;

		i = 0;
		while (str[i])
		{
			if(!isupper(str[i]))
				str[i] = (char)toupper(str[i]);
			i++;
		}
	}

	void	revert_str(std::string & str)
	{
		int		i;
		char	c;
		
		i = 0;
		while(i < (int)str.size() / 2)
		{
			c = str[i];
			str[i] = str[(str.size() - 1) - i];
			str[(str.size() - 1) - i] = c;
			i++;
		}
	}

	std::string	itoa(long long int	nbr)
	{
		std::string str;
		int			i;
		bool		neg;

		neg = false;
		i = 0;
		if (nbr < 0)
		{
			neg = true;
			nbr *= -1;
		}
		if(nbr == 0)
			str += '0';
		while(nbr > 0)
		{
			str += (nbr % 10) + '0';
			nbr /= 10;
		}
		if (neg)
			str += '-';
		revert_str(str);
		return (str);
	}		
}