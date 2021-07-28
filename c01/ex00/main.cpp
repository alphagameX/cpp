/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:52:40 by arthur            #+#    #+#             */
/*   Updated: 2021/07/22 14:34:22 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *walker_usefull;
	Zombie *walker_useless;
	
	std::cout << "- New zombie on heap" << std::endl;
	walker_usefull = newZombie("Glenn");
	std::cout << "- New zombie on heap" << std::endl;
	walker_useless = newZombie("Maggie");
	walker_usefull->annonce();
	walker_useless->annonce();

	// invisible declared zombie
	std::cout << std::endl;
	std::cout << "- New zombie on stack" << std::endl;
	randomChump("Rick");

	std::cout << std::endl;

	std::cout << "- Destroy a heap zombie" << std::endl;
	delete walker_usefull;
	std::cout << "- Destroy a heap zombie" << std::endl;
	delete walker_useless;

	return (0);
}