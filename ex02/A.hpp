/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 23:26:15 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/07 23:46:15 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include <iostream>
# include "Base.hpp"

class A: public Base
{

public:

	A( void );
	A( A const & src );
	virtual ~A( void );

	A &	operator=( A const & rhs );

};

#endif /* A_HPP */
