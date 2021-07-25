/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 21:10:20 by arthur            #+#    #+#             */
/*   Updated: 2021/07/25 23:03:40 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	return ;
}

Karen::~Karen(void) 
{
	return ;
}

void Karen::complain(std::string level)
{
	int i;
	void (Karen::*f[4])(void);
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	f[0] = &Karen::debug;
	f[1] = &Karen::info;
	f[2] = &Karen::warning;
	f[3] = &Karen::error;
	i = 0;
	while (i < 4)
	{
		if (levels[i] == level)
		{
			while (i < 4)
			{
				(this->*f[i])();
				i++;
			}
			return;
		}
		i++;
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Karen::debug(void)
{
	std::cout << "\"DEBUG\" level: Messages in this level contain extensive contextual information" << std::endl;
	std::cout << "They are mostly used for problem diagnosis. Example: \"I love to get extra bacon" << std::endl;
	std::cout << "for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\"" << std::endl;
}

void Karen::info(void)
{
	std::cout << "\"INFO\" level: These messages contain some contextual information to help trace" << std::endl;
	std::cout << "execution in a production environment. Example: \"I cannot believe adding extra" << std::endl;
	std::cout << "bacon cost more money. You don’t put enough! If you did I would not have to ask" << std::endl;
	std::cout << "for it!\"" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years an you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}