/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 10:33:42 by arthur            #+#    #+#             */
/*   Updated: 2021/07/16 19:59:29 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

PhoneBook::PhoneBook(void) : _running(true), _count(0)
{
	std::cout << "Welcome to Phonebook" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor call" << std::endl;
	return ;
}

bool	PhoneBook::isRunning(void)
{
	return this->_running;
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
	}
	else
		std::cout << "There is not space available for a new contact !" << std::endl;
}

void	PhoneBook::drawColumn(std::string content)
{
	int	spacing;

	spacing = 0;
	spacing += content.size();
	while(spacing < 10)
	{
		std::cout << " ";
		spacing++;
	}
	spacing = 0;
	while(content[spacing] && spacing < 10)
	{
		std::cout << content[spacing];
		spacing++;
	}
}

void	PhoneBook::search(void)
{
	int	i;
	int	col;

	i = 0;
	while (i < this->_count)
	{
		col = 0;
		while (col < 4)
		{
			// this->drawColumn();
			col++;
		}
		std::cout << std::endl;
		i++;
	}
}

void	PhoneBook::start(void)
{
	std::string	buf;

	while (this->_running)
	{
		std::cout << "Input a command: ADD, SEARCH, EXIT" << std::endl;
		std::cin >> buf;
		if (buf == "EXIT")
			this->exit();
		if (buf == "ADD")
			this->add();
		if (buf == "SEARCH")
			this->search();
	}
}