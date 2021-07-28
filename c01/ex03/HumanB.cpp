/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 20:25:30 by arthur            #+#    #+#             */
/*   Updated: 2021/07/22 20:31:21 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	return ;
}

HumanB::~HumanB(void) {}

void	HumanB::setWeapon(Weapon & weapon)
{
	_weapon = &weapon;
	return ;
}

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with his " << this->_weapon->getType() << std::endl;
	return ;
}