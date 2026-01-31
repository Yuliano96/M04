/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:59:56 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/31 16:26:36 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat():WrongAnimal("cat")
{
	std::cout << "Cat default constructor\n";
}

WrongCat::WrongCat(const WrongCat &other):WrongAnimal(other)
{
	std::cout << "cat copy constructor\n";
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "cat asignment operator\n";
	if (this != &other)
	{
		WrongAnimal::operator=(other);
	}
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "MIAU MIAU...\n";
}

WrongCat::~WrongCat()
{
	std::cout << "cat destroyed\n";
}