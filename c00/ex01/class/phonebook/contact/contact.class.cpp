/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 10:33:50 by arthur            #+#    #+#             */
/*   Updated: 2021/07/20 00:46:02 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"
/*
** Contact class
**
*/

Contact::Contact(void) {}

Contact::~Contact(void) {}

int	Contact::getId(void) const
{
	return (this->_id);
}

void	Contact::waitingForInput(std::string msg, std::string & str) const
{
	while(str.empty())
	{
		std::cout << msg;
		std::getline(std::cin, str);
		if (str.empty())
			std::cout << "Cannot be empty !" << std::endl;
	}
}

void	Contact::print(void) const
{
	std::cout << std::endl;
	std::cout << "Contact with the id : " << _id << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << "First name > " << _first_name << std::endl;
	std::cout << "Last name > " << _last_name << std::endl;
	std::cout << "Nick name > " << _nick_name << std::endl;
	std::cout << "Phone number > " << _phone_number << std::endl;
	std::cout << "Darkest secret > " << _darkest_secret << std::endl;

	std::cout << std::endl;
}

std::string	Contact::getField(field selector) const
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
	std::cout << std::endl;

	this->waitingForInput("First name > ", _first_name);
	this->waitingForInput("Last name > ", _last_name);
	this->waitingForInput("Nick name > ", _nick_name);
	this->waitingForInput("Phone number > ", _phone_number);
	this->waitingForInput("Darkest secret > ", _darkest_secret);
}
