/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurtinseau <arthurtinseau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 12:06:07 by arthurtinse       #+#    #+#             */
/*   Updated: 2021/08/24 12:28:00 by arthurtinse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap constructor" << std::endl;
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor" << std::endl;
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 20;
}
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & rhs) : ClapTrap(rhs._name)
{
	*this = rhs;
	return ;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & rhs)
{
	if (this == &rhs)
		return (*this);
	_name = rhs._name;
	_attack_damage = rhs._attack_damage;
	_energy_points = rhs._energy_points;
	_hitpoints = rhs._hitpoints;
	return (*this);
}

void ScavTrap::guardGate(void)
{
	std::cout << "Entering in Gate kepper mode" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
		std::cout << "ScavTrap " << _name << " attack " << target << ", causing " << _attack_damage << " points of dammage !" << std::endl;
}

