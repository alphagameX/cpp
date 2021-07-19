/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 19:04:19 by arthur            #+#    #+#             */
/*   Updated: 2021/07/16 20:04:45 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global.hpp"

// static int	nbrlen(int nbr)
// {
// 	int i;

// 	i = 0;
// 	if(nbr == 0)
// 		i++;
// 	while (nbr > 0)
// 	{
// 		nbr /= 10;
// 		i++;
// 	}
// 	return (i);
// }

std::string	ft_itoa(int nbr)
{
	std::string str;
	int			i;

	if (nbr < 0)
	{
		str += '-';
		nbr *= -1;
	}
	if(nbr == 0)
		str += '0';
	while(nbr > 0)
	{
		str += (nbr % 10) + '0';
		nbr /= 10;
	}
	
	return (str);
}