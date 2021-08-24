/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atinseau <atinseau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 13:11:59 by atinseau          #+#    #+#             */
/*   Updated: 2021/08/24 13:26:40 by atinseau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAG_TRAP_HPP 
# define FLAG_TRAP_HPP
# include "ClapTrap.hpp"

class FlagTrap: public ClapTrap
{
	public:
		FlagTrap(void);
		virtual ~FlagTrap(void);
		FlagTrap(const FlagTrap & rhs);

		void highFivesGuys(void);
};

#endif 