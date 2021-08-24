/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 08:58:31 by arthur            #+#    #+#             */
/*   Updated: 2021/08/24 10:01:18 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_attack_damage = 0;
	_energy_points = 10;
	_hitpoints = 10;	
}

ClapTrap::~ClapTrap(void) {}

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
	std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attack_damage << " points of dammage !";
	
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	
}

