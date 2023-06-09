/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 01:53:28 by nloutfi           #+#    #+#             */
/*   Updated: 2023/03/23 16:23:19 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->setType("Cat");
	this->cattoBrain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	this->setType(other.type);
	this->cattoBrain = new Brain(*other.cattoBrain);
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->setType(other.type);
		this->cattoBrain = new Brain(*other.cattoBrain);
	}
	return *this;
}

Cat::~Cat()
{
	delete this->cattoBrain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "meeeoow.." << std::endl;
}