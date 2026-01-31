/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 20:28:24 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/31 15:08:10 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog():Animal("Dog")
{
	std::cout <<"Dog default constructor\n";	
}

Dog::Dog(const Dog &other):Animal(other)
{
	std::cout << "Dog copy constructor\n";
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout <<"Dog assignment operator\n";
	
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed\n";
}

void Dog::makeSound() const
{
	std::cout << "GUAU GUAU....\n";
}
