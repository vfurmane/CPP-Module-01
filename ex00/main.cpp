/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:14:30 by vfurmane          #+#    #+#             */
/*   Updated: 2021/11/26 09:38:58 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie	*mj = new Zombie();
	mj->announce();
	randomChump("random chump");
	Zombie	foo("foo");
	foo.announce();
	Zombie	*bar = newZombie("bar");
	bar->announce();
	delete (mj);
	delete (bar);
	return (0);
}
