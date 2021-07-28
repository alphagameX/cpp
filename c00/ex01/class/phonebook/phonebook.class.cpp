/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 10:33:42 by arthur            #+#    #+#             */
/*   Updated: 2021/07/22 12:32:54 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

PhoneBook::PhoneBook(void) : _running(true), _count(0)
{
	std::cout << "Welcome to Phonebook" << std::endl;
	std::cout << "--------------------" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Ciao !" << std::endl;
	return ;
}

bool	PhoneBook::isRunning(void) const
{
	return (this->_running);
}

void	PhoneBook::exit(void)
{
	this->_running = false;
}

void	PhoneBook::add(void)
{
	if (this->_count < 8)
	{
		this->_lists[this->_count].setField(this->_count + 1);
		this->_count++;
		std::cout << std::endl << "Contact added !" << std::endl << std::endl;
	}
	else
		std::cout << std::endl << "There is not space available for a new contact !" << std::endl << std::endl;
}

void	PhoneBook::printColumn(std::string content) const
{
	int	spacing;

	spacing = content.size();
	while(spacing < 10)
	{
		std::cout << " ";
		spacing++;
	}
	spacing = 0;
	while(content[spacing] && spacing < 10)
	{
		if (spacing == 9)
		{
			if(content.size() > 10)
				content[spacing] = '.';
		}
		std::cout << content[spacing];
		spacing++;
	}
}

void	PhoneBook::getContact(void) const
{
	std::string	buf;
	int			i;

	std::cout << std::endl << "Type contact's id which you want to see (! for leave) > " ;
	std::getline(std::cin, buf);
	if (buf == "!")
	{
		std::cout << std::endl;
		return ;
	}
	if (buf.size() == 1 && buf[0] >= '0' && buf[0] <= '9')
	{
		i = buf[0] - '0';
		if (i > 0 && i < 8 && i <= this->_count)
			this->_lists[i - 1].print();
		else
			std::cout << "The chosen id doesn't exist" << std::endl << std::endl;
	}
	else
		std::cout << "Unexpected input for contact's id" << std::endl << std::endl;
}

void	PhoneBook::search(void) const
{
	int	i;
	int	col;

	i = 0;
	std::cout << std::endl;
	
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|    id    |first name|last  name| nickname |" << std::endl;
	while (i < this->_count)
	{
		col = 0;
		while (col < 4)
		{
			if (col == 0)
			{
				std::cout << '|';
				this->printColumn(utils::itoa(this->_lists[i].getId()) + "    ");
			}
			if (col == 1)
				this->printColumn(this->_lists[i].getField(FIRST_NAME));
			if (col == 2)
				this->printColumn(this->_lists[i].getField(LAST_NAME));
			if (col == 3)
				this->printColumn(this->_lists[i].getField(NICK_NAME));
			std::cout << '|';
			col++;
		}
		std::cout << std::endl;
		i++;
	}
	std::cout << "‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << std::endl;
	if (this->_count > 0)
		this->getContact();
}

void	PhoneBook::start(void)
{
	std::string	buf;

	while (this->_running)
	{
		std::cout << "Input a command: (ADD, SEARCH, EXIT) > ";
		std::getline(std::cin, buf);
		utils::strtoupper(buf);
		if (buf == "EXIT")
			this->exit();
		else if (buf == "ADD")
			this->add();
		else if (buf == "SEARCH")
			this->search();
		else
			std::cout << "Command not found" << std::endl;
	}
}