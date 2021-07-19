/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 19:20:23 by arthur            #+#    #+#             */
/*   Updated: 2021/07/20 00:07:02 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../global.hpp"
#include "contact/contact.class.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		CANONIC(PhoneBook);
		bool	isRunning(void) const;
		void	start(void);
		void	exit(void);
		void	add(void);
		void	search(void) const;
		void	getContact(void) const;
		void	printColumn(std::string content) const;
		void	printMenu(void) const;

	private:
		bool	_running;
		int		_count;
		Contact	_lists[8];
};