/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:48:59 by vfurmane          #+#    #+#             */
/*   Updated: 2021/11/10 11:56:02 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Address of string (using string)   : " << &string;
	std::cout << std::endl;
	std::cout << "Address of string (using stringPTR): " << stringPTR;
	std::cout << std::endl;
	std::cout << "Address of string (using stringREF): " << &stringREF;
	std::cout << std::endl;
	std::cout << "string (using stringPTR): " << *stringPTR << std::endl;
	std::cout << "string (using stringREF): " << stringREF << std::endl;
	return (0);
}