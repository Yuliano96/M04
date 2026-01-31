/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 20:21:12 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/31 21:26:25 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog:public Animal
{
	private:
	Brain *ideas;
	
	public:
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	~Dog();
	void	makeSound() const;
	void setIdea(int i, const std::string &_idea);
	const std::string &getIdea(int i) const;
};

#endif