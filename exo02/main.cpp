/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 04:47:27 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/01 06:45:49 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
			ClapTrap a("Melanie");
			a.attack("Jose mojito ne se bueno");
			a.seewhatsup();
			a.beRepaired(3);
			
			ScavTrap b("Akhi");
			b.attack("range ton Kabouss");
			b.beRepaired(5);
			b.takeDamage(15);
			b.guardGate();
			b.seewhatsup2();

			FragTrap k("Khouya");
			k.attack("Djazair zahef");
			k.takeDamage(12);
			k.beRepaired(5);
			k.seewhatsup3();
			k.highFivesGuys();

			return 0;
}