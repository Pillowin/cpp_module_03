/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:43:28 by agautier          #+#    #+#             */
/*   Updated: 2021/11/16 21:09:34 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>

/*
**	Default and parametric constructor.
*/
FragTrap::FragTrap(std::string const& name) : ClapTrap(name) {
	_name		   = name;
	_life_points   = 101;
	_hit_points	   = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "A new FragTrap arrived ! Welcome " << *this;
}

/*
**	Copy constructor.
*/
FragTrap::FragTrap(FragTrap const& ft) { *this = ft; }

/*
**	Destructor.
*/
FragTrap::~FragTrap(void) {
	std::cout << std::endl << "See you soon FragTrap " << *this;
}

/*
**	Put FragTrap in Gate keeper mode.
*/
void FragTrap::highFivesGuys(void) const {
	std::cout << _name << " is requesting a positive high five !" << std::endl;
}

/*
**	Attacks a target.
*/
void FragTrap::attack(std::string const& target) {
	if (!_energy_points) {
		std::cout << _name << " miss because he is out of energy point !"
				  << std::endl;
		return;
	}
	_energy_points -= 1;
	std::cout << _name << " frag attacks " << target << ", causing "
			  << _attack_damage << " points of damage !" << std::endl;
	std::cout << _name << " now have " << _energy_points << " energy points."
			  << std::endl;
}

/*
**	Assignment operator.
*/
FragTrap& FragTrap::operator=(FragTrap const&) {
	std::cout << "A new FragTrap arrived ! Welcome " << *this;
	return (*this);
}

