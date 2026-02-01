/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypacileo <ypacileo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:20:08 by yuliano           #+#    #+#             */
/*   Updated: 2026/02/01 12:07:36 by ypacileo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	int	i;

	i = 0;
	while (i < Max)
	{
		ideas[i] = "idea";
		i++;
	}
	std::cout << "Brain default constructor\n";
}

Brain::Brain(const Brain &other)
{
	int	i;

	i = 0;
	while (i < Max)
	{
		ideas[i] = other.ideas[i];
		i++;
	}
	std::cout << "Brain copy constructor\n";
}

Brain &Brain::operator=(const Brain &other)
{
	int	i;

	if (this != &other)
	{
		i = 0;
		while (i < Max)
		{
			ideas[i] = other.ideas[i];
			i++;
		}
	}
	std::cout << "Brain assignment operator\n";
	return *this;
}

const std::string &Brain::getIdea(int index) const
{
	/*Se usa static ya que la funcion retorna una refencia,
	una referencia necesita apuntar a un objeto que siga vivo
	despues del return*/
	static const std::string empty = "";

	if (index < 0 || index >= Max)
		return empty;
		
	return ideas[index];
}

void Brain::setIdea(int i, const std::string &_idea)
{
	if (i < 0 || i >= Max)
		return ;
	ideas[i] = _idea;
}



Brain::~Brain()
{
	std::cout << "Brain destroyed\n";
}
