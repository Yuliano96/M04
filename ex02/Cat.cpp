/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypacileo <ypacileo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 11:11:53 by yuliano           #+#    #+#             */
/*   Updated: 2026/02/01 11:37:18 by ypacileo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat"), idea(new Brain())
{
	std::cout << "Cat default constructor\n";
}

Cat::Cat(const Cat &other) : Animal(other), idea(new Brain(*other.idea)) // FIX: deep copy (no shallow)
{
	std::cout << "Cat copy constructor\n";
}

Cat &Cat::operator=(const Cat &other)
{
	
	if (this != &other)
	{
		Animal::operator=(other);
		*idea = *other.idea;
	}
	std::cout << "Cat assignment operator\n";
	return *this;
}

Cat::~Cat()
{
	delete idea;
	std::cout << "Cat destroyed\n";
}

void Cat::makeSound() const
{
	std::cout << "MIAU MIAU...\n";
}

void Cat::setIdea(int i, const std::string &_idea)
{
	this->idea->setIdea(i, _idea);
}

const std::string &Cat::getIdea(int i) const
{
	return (this->idea->getIdea(i));
}