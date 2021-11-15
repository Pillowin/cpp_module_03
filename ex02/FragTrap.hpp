/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agautier <agautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:20:39 by agautier          #+#    #+#             */
/*   Updated: 2021/11/15 20:38:17 by agautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap: public ClapTrap {
	public:
		FragTrap(std::string const& name = "Unnamed");
		FragTrap(FragTrap const& ft);

		virtual ~FragTrap(void);

		void attack(std::string const& target);
		void highFivesGuys(void) const;

		FragTrap& operator=(FragTrap const& ft);

	private:
};

#endif

