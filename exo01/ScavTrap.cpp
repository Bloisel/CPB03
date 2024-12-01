/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 04:44:50 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/01 06:01:05 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
				this->_HitPoints = 100;
				this->_EnergyPoints = 50;
				this->_AttackDamage = 20;
				std::cout << "ScavTrap " << _Name << " has been default-constructed!" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
				this->_HitPoints = 100;
				this->_EnergyPoints = 50;
				this->_AttackDamage = 20;
    std::cout << "ScavTrap " << _Name << " has been constructed!" << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) 
{
    std::cout << "ScavTrap " << _Name << " has been copy-constructed!" << std::endl;
				*this = other;
}

// this est lobjet cible de laffectation et other loperateur a lobjet source c(objetinstcourant) =a source; 
ScavTrap& ScavTrap::operator=(const ScavTrap& other) 
{
				this->_Name = other._Name;
				this->_AttackDamage = other._AttackDamage;
				this->_HitPoints = other._HitPoints;
				this->_EnergyPoints = other._EnergyPoints;
    std::cout << "ScavTrap " << _Name << " has been assigned!" << std::endl;
    return *this;
}


ScavTrap::~ScavTrap() 
{
			std::cout << "Destructoree called for ScavTrap " << std::endl;
}


void ScavTrap::attack(const std::string& target) 
{
    if (this->_EnergyPoints > 0 && this->_HitPoints > 0) 
				{
        this->_EnergyPoints--;
        std::cout << "ScavTrap " << this->_Name << " attacks " << target
                  << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
    } 
				else 
				{
        std::cout << "ScavTrap " << this->_Name << " has no energy or hit points left to attack!" << std::endl;
    }
}

void ScavTrap::guardGate() 
{
      std::cout << "ScavTrap " << _Name << " is now in Gate keeper mode!" << std::endl;
}

void ScavTrap::seewhatsup2() 
{
    std::cout << "____________________________ " << std::endl;
    std::cout << _Name << " Energy left: " << _EnergyPoints 
              << " HitPoints left: " << _HitPoints 
              << " AttackDamage: " << _AttackDamage << std::endl;
    std::cout << "____________________________ " << std::endl;
}