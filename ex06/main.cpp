/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:00:57 by vfurmane          #+#    #+#             */
/*   Updated: 2021/11/26 13:06:54 by vfurmane         ###   ########.fr       */
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
	std::string	level = argv[1];
	int	end_of_complains = 0;
	while (!end_of_complains)
	{
		switch (smith.getComplainIndex(level))
		{
			case DEBUG_INDEX:
				std::cout << "[ DEBUG ]" << std::endl;
				smith.complain("DEBUG");
				std::cout << std::endl;
				level = "INFO";
				break ;
			case INFO_INDEX:
				std::cout << "[ INFO ]" << std::endl;
				smith.complain("INFO");
				std::cout << std::endl;
				level = "WARNING";
				break ;
			case WARNING_INDEX:
				std::cout << "[ WARNING ]" << std::endl;
				smith.complain("WARNING");
				std::cout << std::endl;
				level = "ERROR";
				break ;
			case ERROR_INDEX:
				std::cout << "[ ERROR ]" << std::endl;
				smith.complain("ERROR");
				std::cout << std::endl;
				end_of_complains = 1;
				break ;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]";
				std::cout << std::endl;
				return (1);
				break ;
		}
	}
	return (0);
}
