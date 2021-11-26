/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:21:32 by vfurmane          #+#    #+#             */
/*   Updated: 2021/11/26 09:37:43 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) : _name("Micheal Jackson")
{
}

Zombie::Zombie(std::string name) : _name(name)
{
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " went back to his grave." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
