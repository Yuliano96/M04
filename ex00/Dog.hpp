/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 20:21:12 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/31 15:07:34 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog:public Animal
{
	public:
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	~Dog();
	void	makeSound() const;
};

#endif