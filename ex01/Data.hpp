/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:30:40 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/07 21:32:30 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{

public:

	int	x;

	Data( void );
	Data( int x );
	Data( Data const & src );
	virtual ~Data( void );

	Data &	operator=( Data const & rhs );

};

#endif /* DATA_HPP */
