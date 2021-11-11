/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:21:35 by vfurmane          #+#    #+#             */
/*   Updated: 2021/11/11 12:24:43 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class HumanA
{
public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void	attack(void);

private:

	std::string	_name;
	Weapon		&_weapon;

};


#endif