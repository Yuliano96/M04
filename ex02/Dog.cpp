/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypacileo <ypacileo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 20:28:24 by yuliano           #+#    #+#             */
/*   Updated: 2026/02/01 11:43:00 by ypacileo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog():Animal("Dog"),ideas(new Brain())
{
	std::cout <<"Dog default constructor\n";	
}

Dog::Dog(const Dog &other):Animal(other),ideas(new Brain(*other.ideas))
{
	std::cout << "Dog copy constructor\n";
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		*ideas = *other.ideas;
	}
	std::cout <<"Dog assignment operator\n";
	return *this;
}

Dog::~Dog()
{
	delete ideas;
	std::cout << "Dog destroyed\n";
}

void Dog::makeSound() const
{
	std::cout << "GUAU GUAU....\n";
}

void Dog::setIdea(int i, const std::string &_idea)
{
	this->ideas->setIdea(i, _idea);
}

const std::string &Dog::getIdea(int i) const
{
	return (this->ideas->getIdea(i));
}
