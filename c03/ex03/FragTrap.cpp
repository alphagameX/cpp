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

/* ************************************************************************** */

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap constructor" << std::endl;
	_hitpoints = 100;
	_energy_points = 100 ;
	_attack_damage = 30;
}

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

FragTrap & FragTrap::operator=(const FragTrap & rhs)
{
	if (this == &rhs)
		return (*this);
	_name = rhs._name;
	_attack_damage = rhs._attack_damage;
	_energy_points = rhs._energy_points;
	_hitpoints = rhs._hitpoints;
	return (*this);
}

/* ************************************************************************** */

void FragTrap::highFivesGuys(void)
{
	std::string	result;

	std::cout << "Make FragTrap's check ? [y/n] ";
	std::getline(std::cin, result);
	if("y" == result)
		std::cout << "FragTrap " << _name << " have check !" << std::endl;	
}



