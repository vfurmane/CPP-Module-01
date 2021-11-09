/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:14:30 by vfurmane          #+#    #+#             */
/*   Updated: 2021/11/09 15:26:05 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie	*mj = new Zombie();
	randomChump("random chump");
	Zombie	foo = Zombie("foo");
	Zombie	*bar = newZombie("bar");
	delete (mj);
	delete (bar);
	return (0);
}