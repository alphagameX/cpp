/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:37:10 by arthur            #+#    #+#             */
/*   Updated: 2021/07/22 13:51:13 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# define CANONIC(name) 				\
	name(const name&);				\
	virtual ~name();				\
	name &operator=(const name&);

class Zombie
{
	public:
		Zombie(std::string name);
		CANONIC(Zombie);
		void	annonce(void) const;

	private:
		std::string _name;
};	

Zombie *newZombie(std::string name);
void randomChump( std::string name );

#endif