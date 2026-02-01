/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypacileo <ypacileo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:27:02 by yuliano           #+#    #+#             */
/*   Updated: 2026/02/01 12:24:30 by ypacileo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{

	std::cout << "========== Animal construction ==========" << std::endl;
	std::cout << "=========Dog========\n";
	const Animal* j = new Dog();
	std::cout << "==========cat=======\n";
	const Animal* i = new Cat();
	std::cout<< "====Dog-destroyed=====\n";
	delete j;
	std::cout<< "======Cat-destroyed====\n";
	delete i;
	std::cout << std::endl;

	std::cout << "========== Animal array construction test ==========" << std::endl;
	const Animal* animals[10];
	for (int idx = 0; idx < 10; idx++)
	{
		if (idx < 5)
		{
			std::cout << "====new-Dog=====\n";
			animals[idx] = new Dog();	
		}
		else
		{
			std::cout << "=======new-cat=====\n";
			animals[idx] = new Cat();
		}
			
	}
	std::cout << std::endl;
	std::cout << "=======destructor=====\n";
	for (int idx = 0; idx < 10; idx++)
	{
		if (idx < 5)
		{
			std::cout << "====dog-destructor====\n";
			delete animals[idx];
		}
		else
		{
			std::cout << "======cat-destructor=====\n";
			delete animals[idx];
		}
	}
		
	std::cout << std::endl;
	
	std::cout << "========== Brain Copy Test from Cat ==========" << std::endl;
	std::cout<< "====cat c1 constructor======\n";
	Cat c1;
	std::cout<< "====cat c2 constructor======\n";
	Cat c2;
	c1.setIdea(0, "I want to eat");
	std::cout<< "====assignment operator======\n";
	c2 = c1;
	std::cout << "===================\n";
	
	std::cout << "C1[0]: " << c1.getIdea(0) << std::endl;
	std::cout << "C2[0]: " << c2.getIdea(0) << std::endl;
	std::cout << "Changing C2[0] to 'I want to sleep'" << std::endl;
	c2.setIdea(0, "I want to sleep");
	std::cout << "C1[0]: " << c1.getIdea(0) << std::endl;
	std::cout << "C2[0]: " << c2.getIdea(0) << std::endl;
	std::cout << std::endl;
	
	std::cout << "=====Dog copy constructor====\n";
	Dog p1;
	Dog p2 = p1;
	std::cout<<"=============================\n";
	
	std::cout << "========== END ==========" << std::endl;
	

	return (0);

}
