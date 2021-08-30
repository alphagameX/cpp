/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 13:50:15 by atinseau          #+#    #+#             */
/*   Updated: 2021/08/27 16:56:40 by arthur           ###   ########.fr       */
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


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor" << std::endl;
	_hitpoints = 100;
	_energy_points = 100 ;
	_attack_damage = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap & rhs) : ClapTrap(rhs._name)
{
	*this = rhs;
	return ;
}

/* ************************************************************************** */

FragTrap & FragTrap::operator=(const FragTrap rhs)
{
	FragTrap *tmp = new FragTrap(rhs);
	return (*tmp);
}

/* ************************************************************************** */

void FragTrap::highFivesGuys(void)
{
	std::string	result;

	std::cout << "Make FragTrap's check ? [y/n] ";
	std::getline(std::cin, result);
	if(strval("y") == strval(result.c_str()))
		std::cout << "FragTrap " << _name << " have check !" << std::endl;	
}