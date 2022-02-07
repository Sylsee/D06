/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:27:57 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/07 21:51:51 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

Data *	deserialize( uintptr_t raw )
{
	Data *	ret = reinterpret_cast<Data *>(raw);
	return ret;
}

uintptr_t	serialize( Data * ptr )
{
	uintptr_t ret = reinterpret_cast<uintptr_t>(ptr);
	return ret;
}

int main( void )
{
	Data	data1(42);

	uintptr_t	ptr = serialize(&data1);
	Data *	data2 = deserialize(ptr);

	std::cout << "data1: [" << &data1 << "] value: " << data1.x << std::endl;
	std::cout << "data2: [" << data2 << "] value: " << data2->x << std::endl;

	data2->x = 84;

	std::cout << "data1: [" << &data1 << "] value: " << data1.x << std::endl;
	std::cout << "data2: [" << data2 << "] value: " << data2->x << std::endl;

	return 0;
}
