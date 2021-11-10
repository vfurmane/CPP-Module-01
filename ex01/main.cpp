/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:14:30 by vfurmane          #+#    #+#             */
/*   Updated: 2021/11/10 11:46:11 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string);

int	main(void)
{
	const int	nb_of_zombies = 42;
	Zombie		*horde = zombieHorde(nb_of_zombies, "foobar");

	for (int i = 0; i < nb_of_zombies; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}