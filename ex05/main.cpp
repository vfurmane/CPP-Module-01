/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:00:57 by vfurmane          #+#    #+#             */
/*   Updated: 2021/11/16 17:42:11 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen	smith;

	smith.complain("DEBUG");
	smith.complain("INFO");
	smith.complain("WARN");
	smith.complain("ERROR");
	smith.complain("WARN");
	smith.complain("INFO");
	smith.complain("DEBUG");
	return (0);
}
