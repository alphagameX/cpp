/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:52:40 by arthur            #+#    #+#             */
/*   Updated: 2021/07/22 18:48:10 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
# define HORDE_COUNT 10

int main(void)
{
	Zombie *horde;

	horde = zombieHorde(HORDE_COUNT, "Saint-Thomas");
	if(!horde)
		return (1);
	for(int i = 0; i < HORDE_COUNT; i++)
	{
		horde[i].annonce();
	}
	delete [] horde;
	return (0);
}