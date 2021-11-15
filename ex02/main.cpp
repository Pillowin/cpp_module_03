/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:14:08 by agautier          #+#    #+#             */
/*   Updated: 2021/11/15 20:43:35 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <cstdlib>

int main(void) {
	ClapTrap antoine("Antoine");
	ClapTrap tonton("Tonton Xavier");

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

	std::cout << "----------------------------------" << std::endl << std::endl;

	ScavTrap oulet("Oulet");

	oulet.attack("Antoine");
	std::cout << std::endl;
	antoine.takeDamage(oulet.getAttackDamage());
	std::cout << std::endl;

	oulet.equipWeapon(42);
	std::cout << std::endl;

	oulet.attack("Tonton Xavier");
	std::cout << std::endl;
	tonton.takeDamage(oulet.getAttackDamage());
	std::cout << std::endl;

	oulet.guardGate();
	std::cout << std::endl;

	std::cout << "----------------------------------" << std::endl << std::endl;

	FragTrap norminet("Norminet");

	norminet.attack("Tonton Xavier");
	std::cout << std::endl;
	tonton.takeDamage(norminet.getAttackDamage());
	std::cout << std::endl;

	norminet.highFivesGuys();
	std::cout << std::endl;

	oulet.attack("Norminet");
	std::cout << std::endl;
	norminet.takeDamage(oulet.getAttackDamage());

	return (EXIT_SUCCESS);
}
