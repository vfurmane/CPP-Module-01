/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:17:14 by vfurmane          #+#    #+#             */
/*   Updated: 2021/11/16 17:34:53 by vfurmane         ###   ########.fr       */
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
	void	complain(std::string level);

private:

	void	debug(void);
	void	info(void);
	void	warn(void);
	void	error(void);
	karen_complains	_complains[4];

};
