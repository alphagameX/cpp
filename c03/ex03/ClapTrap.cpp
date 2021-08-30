/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 08:58:31 by arthur            #+#    #+#             */
/*   Updated: 2021/08/27 16:56:33 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor" << std::endl;
	_name = name;
	_attack_damage = 0;
	_energy_points = 10;
	_hitpoints = 10;	
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & rhs)
{
	*this = rhs;
	return ;
}


/* ************************************************************************** */

ClapTrap & ClapTrap::operator=(const ClapTrap & rhs)
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

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attack_damage << " points of dammage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " take " << amount << " damage !" << std::endl;
	_energy_points -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " regenerate " << amount << " energy points !" << std::endl;
	_energy_points += amount;
}

