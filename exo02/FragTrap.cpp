/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 06:22:33 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/01 06:52:05 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
  this->_HitPoints = 100;
 	this->_EnergyPoints = 100;
		this->_AttackDamage = 30;
		std::cout << "Frag Trap is Different  " << _Name << " has been default-constructed!" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
 std::cout << "Frag Trap is Different  " << _Name << " has been constructed!" << std::endl;
}


FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) 
{
    std::cout << "Frag Trap is Different " << _Name << " has been copy-constructed!" << std::endl;
				*this = other;
}

// this est lobjet cible de laffectation et other loperateur a lobjet source c(objetinstcourant) =a source; 
FragTrap& FragTrap::operator=(const FragTrap& other) 
{
				this->_Name = other._Name;
				this->_AttackDamage = other._AttackDamage;
				this->_HitPoints = other._HitPoints;
				this->_EnergyPoints = other._EnergyPoints;
    std::cout << "Frag Trap " << _Name << " has been assigned!" << std::endl;
    return *this;
}


FragTrap::~FragTrap() 
{
			std::cout << "Destructoree called for FragTrap cause FragTrap is different " << std::endl;
}


void FragTrap::seewhatsup3() 
{
    std::cout << "____________________________ " << std::endl;
    std::cout << _Name << " Energy left: " << _EnergyPoints 
              << " HitPoints left: " << _HitPoints 
              << " AttackDamage: " << _AttackDamage << std::endl;
    std::cout << "____________________________ " << std::endl;
}

void FragTrap::highFivesGuys()
{
	 std::cout << "Can i displays a positive high fives request ? " << std::endl;
}