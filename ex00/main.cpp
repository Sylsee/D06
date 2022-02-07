/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoliart <spoliart@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:56:58 by spoliart          #+#    #+#             */
/*   Updated: 2022/02/07 21:23:48 by spoliart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstdlib>

bool	litteralType( std::string s )
{
	if (s.compare("-inff") == 0 || s.compare("-inf") == 0) {
		std::cout << "-inf";
		return true;
	}
	if (s.compare("+inff") == 0 || s.compare("+inf") == 0) {
		std::cout << "+inf";
		return true;
	}
	if (s.compare("nanf") == 0 || s.compare("nan") == 0) {
		std::cout << "nan";
		return true;
	}
	return false;
}

void	displayDouble( std::string s, double nb )
{
	std::cout << "double: ";
	if (litteralType(s) == false) {
		if (std::isdigit(s[0]) == false) {
			std::cout << "impossible" << std::endl;
			return ;
		}

		std::cout << nb;
		if (nb - static_cast<int>(nb) == 0 && static_cast<int>(nb) < 1000000)
			std::cout << ".0";
	}
	std::cout << std::endl;
}

void	displayFloat( std::string s, double nb )
{
	std::cout << "float: ";
	if (litteralType(s) == false) {
		if (std::isdigit(s[0]) == false) {
			std::cout << "impossible" << std::endl;
			return ;
		}

		std::cout << static_cast<float>(nb);
		if (nb - static_cast<int>(nb) == 0 && static_cast<int>(nb) < 1000000)
			std::cout << ".0";
	}
	std::cout << "f" << std::endl;
}

void	displayInt( std::string s, double nb )
{
	std::cout << "int: ";
	if (std::isdigit(s[0]) == false)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(nb) << std::endl;
}

void	displayChar( std::string s )
{
	char	c = std::atoi(s.c_str());

	std::cout << "char: ";
	if (std::isdigit(s[0]) == false)
		std::cout << "impossible" << std::endl;
	else if (std::isprint(c))
		std::cout << "'" << c << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

int main( int argc, char **argv )
{
	double	nb;

	if (argc != 2)
		std::cout << "Error: usage: ./convert [arg]" << std::endl;
	else {
		std::string	s = argv[1];
		nb = std::atof(argv[1]);

		displayChar(s);
		displayInt(s, nb);
		displayFloat(s, nb);
		displayDouble(s, nb);
	}
	return 0;
}
