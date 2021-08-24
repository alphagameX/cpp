/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atinseau <atinseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 08:57:22 by arthur            #+#    #+#             */
/*   Updated: 2021/08/24 14:47:49 by atinseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void) 
{

	FlagTrap *sachaKetchum = new FlagTrap("Sacha Ketchum");

	sachaKetchum->attack("Regis chen");
	sachaKetchum->takeDamage(100);
	sachaKetchum->beRepaired(90);

	sachaKetchum->highFivesGuys();

	return (0);
}