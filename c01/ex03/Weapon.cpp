/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 19:23:34 by arthur            #+#    #+#             */
/*   Updated: 2021/07/22 20:11:27 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
	return ;
}

Weapon::~Weapon(void) {}

std::string &	Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
	return ;
}