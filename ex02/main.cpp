/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 23:24:47 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/08 00:02:11 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <typeinfo>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void	identify( Base & p )
{
	try
	{
		A &	a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "reference type: A" << std::endl;
		return ;
	}
	catch (std::bad_cast & bd)
	{
		(void)bd;
	}
	try
	{
		B &	b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "reference type: B" << std::endl;
		return ;
	}
	catch (std::bad_cast & bd)
	{
		(void)bd;
	}
	try
	{
		C &	c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "reference type: C" << std::endl;
		return ;
	}
	catch (std::bad_cast & bd)
	{
		(void)bd;
	}
}

void	identify( Base * p )
{
	if (dynamic_cast<A *>(p))
		std::cout << "pointer type: A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "pointer type: B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "pointer type: C" << std::endl;
}

Base *	generate( void )
{
	std::srand((unsigned int)time(NULL));
	int	random = rand() % 30;

	if (random % 3 == 0)
		return (new A);
	else if (random % 3 == 1)
		return (new B);
	else
		return (new C);
}

int main( void )
{
	Base	*base1;
	Base	*base2;
	Base	*base3;

	base1 = generate();
	base2 = generate();
	base3 = generate();

	identify(base1);
	identify(*base1);
	identify(base2);
	identify(*base2);
	identify(base3);
	identify(*base3);

	delete base1;
	delete base2;
	delete base3;

	return 0;
}
