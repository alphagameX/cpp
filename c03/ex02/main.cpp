/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atinseau <atinseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 08:57:22 by arthur            #+#    #+#             */
/*   Updated: 2021/08/24 13:22:11 by atinseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) 
{

	ClapTrap *sachaKetchum = new ClapTrap("Sacha Ketchum");

	sachaKetchum->attack("Regis chen");
	sachaKetchum->takeDamage(100);
	sachaKetchum->beRepaired(90);

	return (0);
}