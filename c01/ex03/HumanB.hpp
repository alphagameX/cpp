/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 20:23:27 by arthur            #+#    #+#             */
/*   Updated: 2021/07/22 20:31:26 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		CANONIC(HumanB);
		void	attack(void);
		void	setWeapon(Weapon & weapon);
	private:
		Weapon *_weapon;
		std::string _name;
};