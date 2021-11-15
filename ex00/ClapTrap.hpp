/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:14:31 by agautier          #+#    #+#             */
/*   Updated: 2021/11/15 15:24:18 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
	public:
		ClapTrap(ClapTrap const& sample);
		ClapTrap(std::string const& name);

		virtual ~ClapTrap(void);

		void attack(std::string const& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void equipWeapon(unsigned int amount);

		std::string const& getName(void) const;
		unsigned int getLifePoints(void) const;
		unsigned int getHitPoints(void) const;
		unsigned int getEnergyPoints(void) const;
		unsigned int getAttackDamage(void) const;

		ClapTrap& operator=(ClapTrap const& sample);

	private:
		ClapTrap(void);

		std::string _name;
		unsigned int _life_points;
		unsigned int _hit_points;
		unsigned int _energy_points;
		unsigned int _attack_damage;
};

std::ostream& operator<<(std::ostream& os, ClapTrap const& ct);

#endif

