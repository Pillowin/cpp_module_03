/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:20:39 by agautier          #+#    #+#             */
/*   Updated: 2021/11/16 14:21:29 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap: public FragTrap, public ScavTrap {
	public:
		DiamondTrap(std::string const& name = "Unnamed");
		DiamondTrap(DiamondTrap const& dt);

		virtual ~DiamondTrap(void);

		void attack(std::string const& target);
		void whoAmI(void) const;

		std::string const& getName(void) const;

		DiamondTrap& operator=(DiamondTrap const& dt);

	private:
		std::string _name;
};

#endif

