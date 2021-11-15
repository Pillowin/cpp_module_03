/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:14:31 by agautier          #+#    #+#             */
/*   Updated: 2021/11/15 18:12:54 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
	public:
		ClapTrap(std::string const& name = "Unnamed");
		ClapTrap(ClapTrap const& ct);

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

		ClapTrap& operator=(ClapTrap const& ct);

	private:
		std::string _name;
		unsigned int _life_points;
		unsigned int _hit_points;
		unsigned int _energy_points;
		unsigned int _attack_damage;
};

std::ostream& operator<<(std::ostream& os, ClapTrap const& ct);

#endif

