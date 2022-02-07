/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 23:27:11 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/07 23:27:11 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B( void )
{
	return ;
}

B::B( B const & src )
{
	*this = src;
}

B::~B( void )
{
	return ;
}

B &	B::operator=( B const & rhs )
{
	if (this != &rhs)
		*this = rhs;

	return *this;
}
