/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:29:13 by vfurmane          #+#    #+#             */
/*   Updated: 2021/11/26 13:05:40 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	this->_complains[0] = &Karen::debug;
	this->_complains[1] = &Karen::info;
	this->_complains[2] = &Karen::warning;
	this->_complains[3] = &Karen::error;
}

int	Karen::getComplainIndex(const std::string level)
{
	const std::string		complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i< 4; i++)
	{
		if (level.compare(complains[i]) == 0)
			return (i);
	}
	return (-1);
}

void	Karen::complain(std::string level)
{
	int						index;

	index = this->getComplainIndex(level);
	if (index < 0)
		return ;
	(this->*_complains[index])();
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

