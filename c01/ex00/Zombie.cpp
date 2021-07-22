/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:39:37 by arthur            #+#    #+#             */
/*   Updated: 2021/07/22 13:49:58 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Canonic methods
/*******************************/

Zombie::Zombie(std::string name)
{
	_name = name;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << '<' << _name << "> I leave the horde" << std::endl;
	return ;
}

// Methods
/*******************************/

void	Zombie::annonce(void) const
{
	std::cout << '<' << _name << '>' << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}