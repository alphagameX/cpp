/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 21:10:22 by arthur            #+#    #+#             */
/*   Updated: 2021/07/25 23:08:01 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char *argv[])
{
	Karen karine;
	std::string level;
	if (argc != 2)
	{
		std::cout << "[ NO ARGS ]" << std::endl;
		return (1);
	}
	level = argv[1];
	karine.complain(level);
	return (0);
}