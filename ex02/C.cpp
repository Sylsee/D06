/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 23:27:34 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/07 23:27:34 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C( void )
{
	return ;
}

C::C( C const & src )
{
	*this = src;
}

C::~C( void )
{
	return ;
}

C &	C::operator=( C const & rhs )
{
	if (this != &rhs)
		*this = rhs;

	return *this;
}
