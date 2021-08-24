/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atinseau <atinseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 08:58:31 by arthur            #+#    #+#             */
/*   Updated: 2021/08/24 14:07:04 by atinseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
	ClapTrap *tmp = new ClapTrap(rhs);
	return (*tmp);
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

