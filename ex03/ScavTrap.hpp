/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:20:39 by agautier          #+#    #+#             */
/*   Updated: 2021/11/16 14:00:57 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap: public virtual ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string const& name);
		ScavTrap(ScavTrap const& st);

		virtual ~ScavTrap(void);

		void attack(std::string const& target);
		void guardGate(void) const;

		ScavTrap& operator=(ScavTrap const& st);

	private:
};

#endif

