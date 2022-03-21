//
// Created by Wynell Holger on 3/21/22.
//

#include "../include/Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = "Thought";
	}
}

Brain::~Brain()
{
	std::cout << RED "Destructor " END_COLOR;
	std::cout << YELLOW "Brain " END_COLOR;
	std::cout << RED "called." END_COLOR << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << YELLOW "Copy constructor " END_COLOR;
	std::cout << YELLOW "Brain " END_COLOR;
	std::cout << YELLOW "called." END_COLOR << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = other._ideas[i];
	}
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << YELLOW "Copy assignment operator " END_COLOR;
	std::cout << YELLOW "Dog " END_COLOR;
	std::cout << YELLOW "called." END_COLOR << std::endl;
	if (this == &other)
		return *this;
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = other._ideas[i];
	}
	return *this;
}
