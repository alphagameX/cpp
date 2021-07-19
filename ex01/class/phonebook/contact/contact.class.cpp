/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 10:33:50 by arthur            #+#    #+#             */
/*   Updated: 2021/07/16 19:06:54 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"
/*
** Contact class
**
*/

Contact::Contact(void)
{
	
}

Contact::~Contact(void)
{
	std::cout << "Destructor call" << std::endl;
}

int	Contact::getId(void)
{
	return (this->_id);
}

std::string	Contact::getField(field selector)
{
	if (selector == FIRST_NAME)
		return (this->_first_name);
	if (selector == LAST_NAME)
		return (this->_last_name);
	if (selector == NICK_NAME)
		return (this->_nick_name);
	if (selector == PHONE_NUMBER)
		return (this->_phone_number);
	else
		return (this->_darkest_secret);
}

void	Contact::setField(int id)
{
	this->_id = id;
	std::cout << "Frist name > ";
	std::cin >> this->_first_name;
	std::cout << "Last name > ";
	std::cin >> this->_last_name;
	std::cout << "Nick name > ";
	std::cin >> this->_nick_name;
	std::cout << "Phone number > ";
	std::cin >> this->_phone_number;
	std::cout << "Darkest secret > ";
	std::cin >> this->_darkest_secret;
}
