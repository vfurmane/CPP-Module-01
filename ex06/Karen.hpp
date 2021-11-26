/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:17:14 by vfurmane          #+#    #+#             */
/*   Updated: 2021/11/26 13:05:17 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class	Karen;

typedef void (Karen::*karen_complains)(void);

class Karen
{
public:

	Karen(void);
	int		getComplainIndex(const std::string level);
	void	complain(std::string level);

private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	karen_complains	_complains[4];

};
