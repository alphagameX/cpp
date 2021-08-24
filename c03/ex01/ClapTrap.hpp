/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurtinseau <arthurtinseau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 08:58:05 by arthur            #+#    #+#             */
/*   Updated: 2021/08/24 12:28:10 by arthurtinse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitpoints;
		int			_energy_points;
		int			_attack_damage;
	public:

		ClapTrap(std::string name);
		virtual ~ClapTrap(void);
		ClapTrap(const ClapTrap & rhs);
		ClapTrap & operator=(const ClapTrap & rhs);
		

		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int	amount);
};