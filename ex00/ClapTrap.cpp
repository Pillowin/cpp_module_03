/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:16:45 by agautier          #+#    #+#             */
/*   Updated: 2021/11/15 19:45:48 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

/*
**	Default and parametric constructor.
*/
ClapTrap::ClapTrap(std::string const& name) :
	_name(name), _life_points(60), _hit_points(10), _energy_points(10),
	_attack_damage(0) {
	std::cout << "A new ClapTrap arrived ! Welcome " << *this << std::endl;
}

/*
**	Copy constructor.
*/
ClapTrap::ClapTrap(ClapTrap const& ct) {
	*this = ct;
	std::cout << "A new ClapTrap arrived ! Welcome " << *this << std::endl;
}

/*
**	Destructor.
*/
ClapTrap::~ClapTrap(void) {
	std::cout << std::endl << "See you soon ClapTrap " << *this;
}

/*
**	Attacks a target.
*/
void ClapTrap::attack(std::string const& target) {
	if (!_energy_points) {
		std::cout << "ClapTrap " << _name
				  << " miss because he is out of energy point !" << std::endl;
		return;
	}
	_energy_points -= 1;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
			  << _attack_damage << " points of damage !" << std::endl;
	std::cout << "ClapTrap " << _name << " now have " << _energy_points
			  << " energy points." << std::endl;
}

/*
**	Take damage from a attack, add hit points.
*/
void ClapTrap::takeDamage(unsigned int amount) {
	_hit_points += amount;
	std::cout << "ClapTrap " << _name << " takes " << amount
			  << " points of damage !" << std::endl;
	if (_hit_points > _life_points)
		std::cout << "ClapTrap " << _name << " died. :(" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " now have "
				  << _life_points - _hit_points << " life points." << std::endl;
}

/*
**	Be repaired, remove hit points.
*/
void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " got repaired of " << amount
			  << " points of damage !" << std::endl;
	_hit_points >= amount ? _hit_points -= amount : _hit_points = 0;
	std::cout << "ClapTrap " << _name << " now have "
			  << _life_points - _hit_points << " life points." << std::endl;
}

/*
**	Equip a weapon and set _attack_damage to amount.
*/
void ClapTrap::equipWeapon(unsigned int amount) {
	_attack_damage = amount;
	std::cout << "ClapTrap " << _name << " equips a new weapon which deals "
			  << amount << " points of damage !" << std::endl;
}

/*
**	Getter for name.
*/
std::string const& ClapTrap::getName(void) const { return (_name); }

/*
**	Getter for _life_points.
*/
unsigned int ClapTrap::getLifePoints(void) const { return (_life_points); }

/*
**	Getter for _hit_points.
*/
unsigned int ClapTrap::getHitPoints(void) const { return (_hit_points); }

/*
**	Getter for _energy_points.
*/
unsigned int ClapTrap::getEnergyPoints(void) const { return (_energy_points); }

/*
**	Getter for _attack_damage.
*/
unsigned int ClapTrap::getAttackDamage(void) const {
	return (_energy_points ? _attack_damage : 0);
}

/*
**	Assignment operator.
*/
ClapTrap& ClapTrap::operator=(ClapTrap const& ct) {
	if (this == &ct)
		return (*this);
	return (*this);
}

/*
**	Output operator overload.
*/
std::ostream& operator<<(std::ostream& os, ClapTrap const& ct) {
	os << ct.getName() << " : ";
	if (ct.getHitPoints() > ct.getLifePoints())
		os << 0 << " ❤️ | ";
	else
		os << ct.getLifePoints() - ct.getHitPoints() << " ❤️ | ";
	os << ct.getEnergyPoints() << " ⚡| ";
	os << ct.getAttackDamage() << " 🗡️" << std::endl;
	return (os);
}
