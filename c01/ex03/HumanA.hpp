/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 19:24:02 by arthur            #+#    #+#             */
/*   Updated: 2021/07/22 20:22:48 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# include "Weapon.hpp"
# define HUMAN_A_HPP

class HumanA
{
	public:
		HumanA(std::string name, Weapon & weapon);
		CANONIC(HumanA);
		void	attack(void);
	private:
		Weapon & _weapon;
		std::string _name;
};

#endif