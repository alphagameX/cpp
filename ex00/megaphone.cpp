/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:40:21 by arthur            #+#    #+#             */
/*   Updated: 2021/07/15 19:13:54 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <iostream>

void	strtoupper(std::string &str)
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

int	main(int argc, char *argv[])
{
	std::string	str;

	if (argc != 2)
	{
		std::cout << "No args passed" << std::endl;
		return (1);
	}
	str = argv[1];
	strtoupper(str);
	std::cout << str << std::endl;
	return (0); 
}