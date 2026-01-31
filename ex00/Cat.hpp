/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 11:05:28 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/31 15:04:54 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat:public Animal
{
	public:
	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat();
	void makeSound() const;
};

#endif