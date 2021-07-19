/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 10:31:25 by arthur            #+#    #+#             */
/*   Updated: 2021/07/16 19:06:23 by arthur           ###   ########.fr       */
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
		std::string getField(field selector);
		void		setField(int id);
		int			getId(void);

	private:
		int			_id;
		std::string _first_name;
		std::string	_last_name;
		std::string _nick_name;
		std::string _phone_number;
		std::string _darkest_secret;
};
