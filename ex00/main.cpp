/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:14:08 by agautier          #+#    #+#             */
/*   Updated: 2021/11/16 20:27:18 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <cstdlib>

int main(void) {
	ClapTrap antoine("Antoine");
	ClapTrap tonton("Tonton Xavier");
	std::cout << std::endl;

	antoine.attack("Tonton Xavier");
	std::cout << std::endl;
	tonton.takeDamage(antoine.getAttackDamage());
	std::cout << std::endl;

	tonton.equipWeapon(9000);
	std::cout << std::endl;
	tonton.beRepaired(9000);
	std::cout << std::endl;

	antoine.equipWeapon(2);
	std::cout << std::endl;

	tonton.attack("Antoine");
	std::cout << std::endl;
	antoine.takeDamage(tonton.getAttackDamage());
	std::cout << std::endl;

	return (EXIT_SUCCESS);
}
