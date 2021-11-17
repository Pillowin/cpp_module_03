/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:18:57 by agautier          #+#    #+#             */
/*   Updated: 2021/11/16 21:25:18 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <string>

/*
**	Default and parametric constructor.
*/
DiamondTrap::DiamondTrap(std::string const& name) :
	ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(),
	_name(name) {
	ClapTrap::_name = name + "_clap_name";
	std::cout << "A new DiamondTrap arrived ! Welcome " << *this;
}

/*
**	Copy constructor.
*/
DiamondTrap::DiamondTrap(DiamondTrap const& dt) :
	ClapTrap(dt._name), FragTrap(dt._name), ScavTrap() {
	*this = dt;
}

/*
**	Destructor.
*/
DiamondTrap::~DiamondTrap(void) {
	std::cout << std::endl << "See you soon DiamondTrap " << *this;
}

/*
**	Put DiamondTrap in Gate keeper mode.
*/
void DiamondTrap::whoAmI(void) const {
	std::cout << ClapTrap::_name << "'s diamond name is " << DiamondTrap::_name
			  << "." << std::endl;
}

/*
**	Attacks a target.
*/
void DiamondTrap::attack(std::string const& target) {
	ScavTrap::attack(target);
}

/*
**	Assignment operator.
*/
DiamondTrap& DiamondTrap::operator=(DiamondTrap const& dt) {
	if (this == &dt)
		return (*this);
	_name = dt._name;
	std::cout << "A new DiamondTrap arrived ! Welcome " << *this;
	return (*this);
}
