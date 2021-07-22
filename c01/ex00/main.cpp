/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:52:40 by arthur            #+#    #+#             */
/*   Updated: 2021/07/22 13:56:59 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *walker_usefull;
	Zombie *walker_useless;
	
	walker_usefull = new Zombie("Glenn");
	walker_useless = newZombie("Maggie");
	
	walker_usefull->annonce();
	walker_useless->annonce();

	// invisible declared zombie
	randomChump("Rick");	

	delete walker_usefull;
	delete walker_useless;

	return (0);
}