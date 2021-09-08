/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurtinseau <arthurtinseau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 08:57:22 by arthur            #+#    #+#             */
/*   Updated: 2021/08/24 12:31:27 by arthurtinse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) 
{

	ScavTrap *sachaKetchum = new ScavTrap("Sacha Ketchum");

	sachaKetchum->attack("Regis chen");
	sachaKetchum->takeDamage(100);
	sachaKetchum->beRepaired(90);

	sachaKetchum->guardGate();

	delete sachaKetchum;

	return (0);
}