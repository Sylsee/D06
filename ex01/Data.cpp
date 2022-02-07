/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:30:40 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/07 21:36:01 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( void ) : x(21)
{
	return ;
}

Data::Data( int x ) : x(x)
{
	return ;
}

Data::Data( Data const & src )
{
	*this = src;
}

Data::~Data( void )
{
	return ;
}

Data &	Data::operator=( Data const & rhs )
{
	if (this != &rhs)
		this->x = rhs.x;

	return *this;
}
