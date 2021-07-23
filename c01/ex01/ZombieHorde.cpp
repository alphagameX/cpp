/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:36:30 by arthur            #+#    #+#             */
/*   Updated: 2021/07/22 18:47:20 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *hordes;
	
	hordes = NULL;
	try 
	{
		hordes = new Zombie[N];
		for(int i = 0; i < N; i++)
			hordes[i].setName(name);
	} 
	catch (std::bad_alloc & e)
	{
		std::cout << "Alloc error" << std::endl;
		hordes = NULL;
	}
	return (hordes);
}
