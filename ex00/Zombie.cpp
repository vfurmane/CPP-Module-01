/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:21:32 by vfurmane          #+#    #+#             */
/*   Updated: 2021/11/09 15:26:15 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) : _name("Micheal Jackson")
{
	this->announce();
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Here!" << std::endl;
	this->announce();
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " went back to his grave." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}