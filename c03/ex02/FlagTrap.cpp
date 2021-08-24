/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atinseau <atinseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 13:50:15 by atinseau          #+#    #+#             */
/*   Updated: 2021/08/24 14:52:17 by atinseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int strval(const char *str)
{
	int i = 0;
	int val = 0;

	while (str[i])
		val += str[i++];
	return (val);
}

/* ************************************************************************** */


FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FlagTrap constructor" << std::endl;
	_hitpoints = 100;
	_energy_points = 100 ;
	_attack_damage = 30;
}

FlagTrap::~FlagTrap(void)
{
	std::cout << "FlagTrap destructor" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap & rhs) : ClapTrap(rhs._name)
{
	*this = rhs;
	return ;
}

/* ************************************************************************** */

void FlagTrap::highFivesGuys(void)
{
	std::string	result;

	std::cout << "Make check FlagTrap ? [y/n] ";
	std::getline(std::cin, result);
	if(strval("y") == strval(result.c_str()))
		std::cout << "FlagTrap " << _name << " have check !" << std::endl;	
}