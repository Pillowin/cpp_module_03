/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:43:28 by agautier          #+#    #+#             */
/*   Updated: 2021/11/15 20:33:48 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <string>

/*
**	Default and parametric constructor.
*/
ScavTrap::ScavTrap(std::string const& name) : ClapTrap(name) {
	_name		   = name;
	_life_points   = 200;
	_hit_points	   = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "A new ScavTrap arrived ! Welcome " << *this << std::endl;
}

/*
**	Copy constructor.
*/
ScavTrap::ScavTrap(ScavTrap const& st) {
	*this = st;
	std::cout << "A new ScavTrap arrived ! Welcome " << *this << std::endl;
}

/*
**	Destructor.
*/
ScavTrap::~ScavTrap(void) {
	std::cout << std::endl << "See you soon ScavTrap " << *this;
}

/*
**	Put ScavTrap in Gate keeper mode.
*/
void ScavTrap::guardGate(void) const {
	std::cout << "ScavTrap " << _name << " has enterred in Gate keeper mode."
			  << std::endl;
}

/*
**	Attacks a target.
*/
void ScavTrap::attack(std::string const& target) {
	if (!_energy_points) {
		std::cout << "ScavTrap " << _name
				  << " miss because he is out of energy point !" << std::endl;
		return;
	}
	_energy_points -= 1;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
			  << _attack_damage << " points of damage !" << std::endl;
	std::cout << "ScavTrap " << _name << " now have " << _energy_points
			  << " energy points." << std::endl;
}

/*
**	Assignment operator.
*/
ScavTrap& ScavTrap::operator=(ScavTrap const& st) {
	if (this == &st)
		return (*this);
	return (*this);
}
