/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:27:02 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/31 21:40:15 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	std::cout << "========== Animal construction test ==========" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
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
	Cat c1;
	Cat c2;
	c1.setIdea(0, "I want to eat");
	c2 = c1;
	
	std::cout << "C1[0]: " << c1.getIdea(0) << std::endl;
	std::cout << "C2[0]: " << c2.getIdea(0) << std::endl;
	std::cout << "Changing C2[0] to 'I want to sleep'" << std::endl;
	c2.setIdea(0, "I want to sleep");
	std::cout << "C1[0]: " << c1.getIdea(0) << std::endl;
	std::cout << "C2[0]: " << c2.getIdea(0) << std::endl;
	std::cout << std::endl;
	
	std::cout << "========== Brain Copy Test from Dog ==========" << std::endl;
	Dog d1;
	Dog d2;
	d1.setIdea(99, "I want to die");
	d2 = d1;
	std::cout << "d1[0]: " << d1.getIdea(0) << std::endl;
	std::cout << "d2[0]: " << d2.getIdea(0) << std::endl;
	std::cout << "d1[99]: " << d1.getIdea(99) << std::endl;
	std::cout << "d2[99]: " << d2.getIdea(99) << std::endl;
	std::cout << "Changing d2[0] to 'I want to sleep'" << std::endl;
	d2.setIdea(0, "I want to sleep");
	std::cout << "Changing d2[100] to 'I dont want to die'" << std::endl;
	d2.setIdea(99, "I dont want to die");
	std::cout << "d1[0]: " << d1.getIdea(0) << std::endl;
	std::cout << "d2[0]: " << d2.getIdea(0) << std::endl;
	std::cout << "d1[99]: " << d1.getIdea(99) << std::endl;
	std::cout << "d2[99]: " << d2.getIdea(99) << std::endl;
	std::cout << std::endl;
	
	
	std::cout << "========== END ==========" << std::endl;
	

	return (0);

}
