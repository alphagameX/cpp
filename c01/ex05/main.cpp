/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 21:10:22 by arthur            #+#    #+#             */
/*   Updated: 2021/07/25 20:42:29 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"



int main(void)
{
	Karen karine;

	std::cout << "########################" << std::endl;
	karine.complain("DEBUG");
	std::cout << "########################" << std::endl;
	karine.complain("INFO");
	std::cout << "########################" << std::endl;
	karine.complain("WARNING");
	std::cout << "########################" << std::endl;
	karine.complain("ERROR");

	return (0);
}