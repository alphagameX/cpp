/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 08:58:05 by arthur            #+#    #+#             */
/*   Updated: 2021/08/27 16:51:32 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP
# include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitpoints;
		int			_energy_points;
		int			_attack_damage;
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		virtual ~ClapTrap(void);
		ClapTrap(const ClapTrap & rhs);
		ClapTrap & operator=(const ClapTrap & rhs);
		

		virtual void	attack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int	amount);
};

#endif