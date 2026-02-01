/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:08:47 by yuliano           #+#    #+#             */
/*   Updated: 2026/01/31 20:49:54 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

#define Max 100

class Brain
{
	private:
	std::string ideas[Max];
	
	public:
	Brain();
	Brain(const Brain &other);    
	Brain &operator=(const Brain &other);
	~Brain();
	const std::string &getIdea(int index) const;
	void setIdea(int i, const std::string &_idea);
	
};

#endif
