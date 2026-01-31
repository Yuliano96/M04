/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 11:05:28 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/31 21:09:09 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
	Brain *idea;

	public:
	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat();
	const std::string &getIdea(int i) const;
	void setIdea(int i, const std::string &_idea);
	void makeSound() const;
};

#endif
