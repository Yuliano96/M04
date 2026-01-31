/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 23:01:57 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/31 16:37:06 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\n--- Array test ---\n";
	
    Animal *a[] = {new Cat(), new Dog()};
    std::cout << a[0]->getType() << ":\n";
    a[0]->makeSound();
	std::cout << a[1]->getType() << ":\n";
    a[1]->makeSound();
   	for(int i = 0; i < 2; i++)
        delete a[i];
	std::cout << "\n--- subject test ---\n";
	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	j->makeSound(); //will output the cat sound!
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << "------class wrong----\n";
	
	const WrongAnimal *w = new WrongCat();
	std::cout << w->getType() << std::endl;
	w->makeSound();
	delete w;
    return (0);
}