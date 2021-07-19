/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 10:44:44 by arthur            #+#    #+#             */
/*   Updated: 2021/07/16 19:58:57 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
# define CANONIC(name) 				\
	name(const name&);				\
	virtual ~name();				\
	name &operator=(const name&);


std::string ft_itoa(int nbr);
