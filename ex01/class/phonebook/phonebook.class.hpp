/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 19:20:23 by arthur            #+#    #+#             */
/*   Updated: 2021/07/16 19:17:10 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../global.hpp"
#include "contact/contact.class.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);
		CANONIC(PhoneBook);
		bool	isRunning(void);
		void	start(void);
		void	exit(void);
		void	add(void);
		void	search(void);
		void	drawColumn(std::string content);

	private:
		bool	_running;
		int		_count;
		Contact	_lists[8];
};