/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:00:57 by vfurmane          #+#    #+#             */
/*   Updated: 2021/11/26 14:13:04 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

#define DEBUG_INDEX 0
#define INFO_INDEX 1
#define WARNING_INDEX 2
#define ERROR_INDEX 3

int	main(int argc, char **argv)
{
	Karen	smith;

	if (argc != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]";
		std::cout << std::endl << std::endl;
		return (1);
	}
	switch (smith.getComplainIndex(argv[1]))
	{
		case DEBUG_INDEX:
			std::cout << "[ DEBUG ]" << std::endl;
			smith.complain("DEBUG");
			std::cout << std::endl;
			__attribute__ ((fallthrough));
		case INFO_INDEX:
			std::cout << "[ INFO ]" << std::endl;
			smith.complain("INFO");
			std::cout << std::endl;
			__attribute__ ((fallthrough));
		case WARNING_INDEX:
			std::cout << "[ WARNING ]" << std::endl;
			smith.complain("WARNING");
			std::cout << std::endl;
			__attribute__ ((fallthrough));
		case ERROR_INDEX:
			std::cout << "[ ERROR ]" << std::endl;
			smith.complain("ERROR");
			std::cout << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]";
			std::cout << std::endl << std::endl;
			return (1);
			break ;
	}
	return (0);
}
