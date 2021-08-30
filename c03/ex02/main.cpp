/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 08:57:22 by arthur            #+#    #+#             */
/*   Updated: 2021/08/27 17:02:00 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void) 
{

	FragTrap *sachaKetchum = new FragTrap("Sacha Ketchum");
	FragTrap *regisChen = new FragTrap("Regis chen");

	

	sachaKetchum->attack("Regis chen");
	sachaKetchum->takeDamage(100);
	sachaKetchum->beRepaired(90);

	sachaKetchum->highFivesGuys();
	regisChen->takeDamage(100);

	delete sachaKetchum;
	delete regisChen;

	return (0);
}