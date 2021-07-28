/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:50:44 by arthur            #+#    #+#             */
/*   Updated: 2021/07/22 18:59:16 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "salut chacal";
	std::string & ref = str;
	std::string *ptr = &str;
	
	std::cout << "Str's memory address: " << &str << std::endl;
	std::cout << "Ref's memory address: " << &ref << std::endl;
	std::cout << "Ptr's memory address: " << ptr << std::endl;
	std::cout << "Str content: " << str << std::endl;
	std::cout << "Str content with ptr: " << *ptr << std::endl;
	std::cout << "Str content with ref: " << ref << std::endl;
	return (0);
}