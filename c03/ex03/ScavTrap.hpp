/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurtinseau <arthurtinseau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 12:02:47 by arthurtinse       #+#    #+#             */
/*   Updated: 2021/08/24 12:29:33 by arthurtinse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap 
{
	private:
		
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap & rhs);
		virtual ~ScavTrap(void);
		ScavTrap & operator=(const ScavTrap & rhs);
		void guardGate(void);
		void attack(std::string const & target);
};

#endif