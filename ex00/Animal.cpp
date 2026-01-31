/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 23:49:34 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/31 15:38:15 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal():type("Animal")
{
	std::cout << "Animal default constructor\n";
}

Animal::Animal(const std::string &_type):type(_type)
{
	std::cout << "Animal Alternative constructor\n";
}

Animal::Animal(const Animal &other):type(other.type)
{
	std::cout << "Animal copy constructor\n";
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Animal assignment operator \n";
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destroyed\n";
}

void Animal::makeSound() const
{
	std::cout << "Make Sound...\n";
}

const std::string &Animal::getType() const
{
	return type;
}