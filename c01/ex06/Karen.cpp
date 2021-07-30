/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 21:10:20 by arthur            #+#    #+#             */
/*   Updated: 2021/07/30 20:25:25 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int strval(const char *str)
{
	int i = 0;
	int val = 0;

	while (str[i])
		val += str[i++];
	return (val);
}

/*
** CLASS KAREN
**
*/

Karen::Karen(void)
{
	return ;
}

Karen::~Karen(void) 
{
	return ;
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



void Karen::print_all_above(int level_count)
{
	void (Karen::*f[4])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	while (level_count < 4)
	{
		(this->*f[level_count])();
		level_count++;
	}	
}

void Karen::complain(std::string level)
{
	switch (strval(level.c_str()))
	{
		case DEBUG:
			print_all_above(0);
			break;
		case INFO:
			print_all_above(1);
			break;
		case WARNING:
			print_all_above(2);
			break;
		case ERROR:
			print_all_above(3);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
