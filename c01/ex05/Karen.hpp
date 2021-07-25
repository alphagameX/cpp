/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 21:10:16 by arthur            #+#    #+#             */
/*   Updated: 2021/07/25 20:05:29 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# define CANONIC(name) 				\
	virtual ~name();				\
	name &operator=(const name&);

class Karen
{
private:
	std::string _level;
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	Karen(void);
	CANONIC(Karen);
	void complain(std::string level);
};