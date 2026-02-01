/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypacileo <ypacileo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 23:37:21 by yuliano           #+#    #+#             */
/*   Updated: 2026/02/01 13:07:14 by ypacileo         ###   ########.fr       */
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
	virtual void makeSound() const = 0;
	const std::string &getType() const;
	virtual ~Animal();
};

#endif