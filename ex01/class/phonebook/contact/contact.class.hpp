/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 10:31:25 by arthur            #+#    #+#             */
/*   Updated: 2021/07/20 00:03:31 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../global.hpp"

enum field
{
	ID = -1,
	FIRST_NAME = 0,
	LAST_NAME = 1,
	NICK_NAME = 2,
	PHONE_NUMBER = 3,
	DARKEST_SECRET = 4
};

class Contact
{
	public:
		Contact(void);
		CANONIC(Contact);
		std::string getField(field selector) const;
		void		setField(int id);
		int			getId(void) const;
		void		print(void) const;
		void		waitingForInput(std::string msg, std::string & str) const;

	private:
		int			_id;
		std::string _first_name, _last_name, _nick_name,
			_phone_number, _darkest_secret;
};
