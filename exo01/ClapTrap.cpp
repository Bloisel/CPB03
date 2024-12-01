/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 04:47:23 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/01 05:09:42 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : _Name("NoName"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) 
{
    std::cout << "ClapTrap " << _Name << " has been default-constructed!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _Name(name),_HitPoints(10), _EnergyPoints(10), _AttackDamage(0) 
{
    std::cout << "ClapTrap " << _Name << " has been constructed!" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap& other) 
{
    std::cout << "ClapTrap " << _Name << " has been copy-constructed!" << std::endl;
				*this = other;
}

// this est lobjet cible de laffectation et other loperateur a lobjet source c(objetinstcourant) =a source; 
ClapTrap& ClapTrap::operator=(const ClapTrap& other) 
{
				this->_Name = other._Name;
				this->_AttackDamage = other._AttackDamage;
				this->_HitPoints = other._HitPoints;
				this->_EnergyPoints = other._EnergyPoints;
    std::cout << "ClapTrap " << _Name << " has been assigned!" << std::endl;
    return *this;
}


ClapTrap::~ClapTrap() 
{
			std::cout << "Destructoree called " << std::endl;
}


void ClapTrap::attack(const std::string& target) 
{
    if (this->_EnergyPoints > 0 && this->_HitPoints > 0) 
				{
        this->_EnergyPoints--;
        std::cout << "ClapTrap " << this->_Name << " attacks " << target
                  << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
    } 
				else 
				{
        std::cout << "ClapTrap " << this->_Name << " has no energy or hit points left to attack!" << std::endl;
    }
}

void ClapTrap::seewhatsup()
{
	std::cout << "____________________________ " << std::endl;
	std::cout << this->_Name << " Energy left :  " << this->_EnergyPoints << " HitPoints left :  " << this->_HitPoints << std::endl;
	std::cout << "____________________________ " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) 
{
    if (this->_HitPoints > 0) 
				{
        unsigned int damageTaken = (amount > this->_HitPoints) ? this->_HitPoints : amount;
       this->_HitPoints -= damageTaken;
        std::cout << "ClapTrap " << this->_Name << " takes " << damageTaken
                  << " points of damage! Remaining hit points: " << this->_HitPoints << std::endl;
    } 
				else 
				{
        std::cout << "ClapTrap " << this->_Name << " is already at 0 hit points!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) 
{
    if (this->_EnergyPoints > 0 && this->_HitPoints > 0) 
				{
        this->_HitPoints += amount; 
        this->_EnergyPoints--;      
        std::cout << "ClapTrap " << this->_Name << " repairs itself, recovering "
                  << amount << " hit points! Remaining energy points: "
                  << this->_EnergyPoints << ", hit points: " << this->_HitPoints << std::endl;
    } 
				else 
				{
        std::cout << "ClapTrap " << this->_Name << " has no energy or hit points left to repair!" << std::endl;
    }
}

