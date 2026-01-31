/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:27:30 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/31 16:35:41 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal():type("Animal")
{
	std::cout << "Animal default constructor\n";
}

WrongAnimal::WrongAnimal(const std::string &_type):type(_type)
{
	std::cout << "Animal alternative constructor\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other):type(other.type)
{
	std::cout<< "Animal copy constructor\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "Animal assignment operator\n";
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Animal destroyed\n";
}

void WrongAnimal::makeSound() const
{
	std::cout << "ANIMAL.....\n";
}

const std::string &WrongAnimal::getType() const
{
	return type;
}