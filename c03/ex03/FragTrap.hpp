/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 13:11:59 by atinseau          #+#    #+#             */
/*   Updated: 2021/08/27 16:52:29 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAG_TRAP_HPP 
# define FLAG_TRAP_HPP
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		virtual ~FragTrap(void);
		FragTrap(const FragTrap & rhs);
		FragTrap & operator=(const FragTrap & rhs);

		void highFivesGuys(void);
};


#endif 