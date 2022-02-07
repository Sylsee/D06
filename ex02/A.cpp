/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 23:26:15 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/07 23:26:15 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A( void )
{
	return ;
}

A::A( A const & src )
{
	*this = src;
}

A::~A( void )
{
	return ;
}

A &	A::operator=( A const & rhs )
{
	if (this != &rhs)
		*this = rhs;

	return *this;
}
