/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 23:27:34 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/07 23:46:35 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include <iostream>
# include "Base.hpp"

class C: public Base
{

public:

	C( void );
	C( C const & src );
	virtual ~C( void );

	C &	operator=( C const & rhs );

};

#endif /* C_HPP */
