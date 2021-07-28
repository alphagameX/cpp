/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:39:37 by arthur            #+#    #+#             */
/*   Updated: 2021/07/22 14:33:21 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Canonic methods
/*******************************/

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << '<' << _name << "> I leave the horde" << std::endl;
	return ;
}

// Methods
/*******************************/

void	Zombie::setName(std::string name)
{
	_name = name;
	return ;
}

void	Zombie::annonce(void) const
{
	std::cout << '<' << _name << '>' << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}