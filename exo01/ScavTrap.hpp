/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 04:44:52 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/01 05:58:13 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
				public:
    	ScavTrap(const std::string& name);
					ScavTrap();
    	ScavTrap(const ScavTrap& other);
    	ScavTrap& operator=(const ScavTrap& other);
    	~ScavTrap();
    	void attack(const std::string& target);
					void guardGate();
					void seewhatsup2(); 
};

#endif