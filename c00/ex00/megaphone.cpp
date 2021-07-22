/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:40:21 by arthur            #+#    #+#             */
/*   Updated: 2021/07/22 12:29:20 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <iostream>

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

int	main(int argc, const char *argv[])
{
	std::string	str;
	int			i;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	i = 1;
	while(i < argc)
	{
		str = argv[i];
		strtoupper(str);
		std::cout << str;
		i++;
	}
	std::cout << std::endl;
	return (0); 
}