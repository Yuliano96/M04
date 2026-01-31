/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 23:37:21 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/31 15:02:15 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal
{
	protected:
	std::string type;
	
	public:
	Animal();
	Animal(const std::string &_type);
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	virtual void makeSound() const;
	const std::string &getType() const;
	virtual ~Animal();
};

#endif