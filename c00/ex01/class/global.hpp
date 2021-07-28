/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 10:44:44 by arthur            #+#    #+#             */
/*   Updated: 2021/07/20 00:51:51 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GLOBAL_HPP
# define GLOBAL_HPP

# include <iostream>
# include <limits.h>
# include <string>
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

#endif