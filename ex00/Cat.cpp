/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 11:11:53 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/31 15:06:51 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat():Animal("Cat")
{
	std::cout << "Cat default constructor\n"; 
}

Cat::Cat(const Cat &other):Animal(other)
{
	std::cout << "Cat copy constructor\n";
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout <<"Cat assignment operator\n";
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destroyed\n";
}

void Cat::makeSound() const
{
	std::cout << "MIAU MIAU...\n";
}
