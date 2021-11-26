/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:00:57 by vfurmane          #+#    #+#             */
/*   Updated: 2021/11/26 13:03:53 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen	smith;

	smith.complain("DEBUG");
	smith.complain("INFO");
	smith.complain("WARNING");
	smith.complain("ERROR");
	smith.complain("KAREN");
	return (0);
}
