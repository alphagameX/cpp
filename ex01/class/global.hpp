/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 10:44:44 by arthur            #+#    #+#             */
/*   Updated: 2021/07/20 00:29:07 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
# define CANONIC(name) 				\
	name(const name&);				\
	virtual ~name();				\
	name &operator=(const name&);


namespace utils
{
	void	revert_str(std::string & str);
	std::string	itoa(long long int nbr);
	void		strtoupper(std::string & str);
};
