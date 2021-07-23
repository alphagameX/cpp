/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 19:57:28 by arthur            #+#    #+#             */
/*   Updated: 2021/07/22 20:28:03 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & weapon) : _weapon(weapon), _name(name)
{
	return ;
}

HumanA::~HumanA(void) {}

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with his " << this->_weapon.getType() << std::endl;
	return ;
}

