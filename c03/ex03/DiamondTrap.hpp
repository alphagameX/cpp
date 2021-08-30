/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 17:04:53 by arthur            #+#    #+#             */
/*   Updated: 2021/08/27 17:05:03 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(std::string name);
		void		whoAmi(void);
		using 		ScavTrap::attack;

	private:
		std::string _name;
};

#endif