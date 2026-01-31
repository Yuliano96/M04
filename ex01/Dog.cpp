/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 20:28:24 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/31 21:26:35 by yuliano          ###   ########.fr       */
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
	std::cout <<"Dog assignment operator\n";
	
	if (this != &other)
	{
		Animal::operator=(other);
		*ideas = *other.ideas;
	}
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
