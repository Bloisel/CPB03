/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 04:47:27 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/01 06:04:46 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
#include"ScavTrap.hpp"

int	main(void)
{
	ClapTrap test("Jean luc");
	ScavTrap scav;
    
    
    scav.guardGate();

    scav.seewhatsup2();

    test.seewhatsup();
	
	scav.attack("Nobody");
	test.attack("Everybody");
	scav.takeDamage(7);
	scav.beRepaired(5);
	
	
	scav.takeDamage(100);
	test.takeDamage(299);
	
	
	return (0);
}