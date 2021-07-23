/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 19:17:53 by arthur            #+#    #+#             */
/*   Updated: 2021/07/22 20:12:46 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# define CANONIC(name) 				\
	virtual ~name();				\
	name &operator=(const name&);

class Weapon
{
	public:
		Weapon(std::string type);
		CANONIC(Weapon);
		std::string &	getType(void);
		void			setType(std::string type);

	private:
		std::string _type; 
};

#endif