/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 23:27:11 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/07 23:46:30 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include <iostream>
# include "Base.hpp"

class B: public Base
{

public:

	B( void );
	B( B const & src );
	virtual ~B( void );

	B &	operator=( B const & rhs );

};

#endif /* B_HPP */
