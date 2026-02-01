/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypacileo <ypacileo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:27:02 by yuliano           #+#    #+#             */
/*   Updated: 2026/02/01 13:36:16 by ypacileo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

#define SIZE 10

int main()
{

	Animal *a[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		if (i % 2 == 0)
		{
			std::cout << "=========Dog=======\n";
			a[i] = new Dog();
			std::cout <<"=========makeSound===\n";
			a[i]->makeSound();
		}
		else
		{
			std::cout << "=========Cat=======\n";
			a[i] = new Cat();
			std::cout <<"=========makeSound===\n";
			a[i]->makeSound();
		}
		
	}
	
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "=====destructor=====\n";
		delete a[i];
	}
	
	return (0);

}
