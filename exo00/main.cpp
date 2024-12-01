/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 04:47:27 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/01 04:04:12 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


void setofAttack()
{
    ClapTrap d("UnknownFreak");
    for (int i = 0 ; i < 20 ; i++)
    {
        d.attack("NoukaRienComprendre");
    }         
}

int main()
{
    ClapTrap a("ObamAs");

    ClapTrap m("Michel"); 
    

    ClapTrap c = a; 
    a.attack("Nouka");
    a.takeDamage(10);
    a.takeDamage(10);
    a.attack("unknown");
    
    m.attack("Rien");
    m.attack("NiPersonne");
    
    a.beRepaired(10);
    
    setofAttack();
    
    m.seewhatsup();
    m.beRepaired(3);
    m.seewhatsup();
    m.takeDamage(100);
    m.attack("de l'air");
    
    a.seewhatsup();
    
    c.seewhatsup();
    
    c.attack("pikachu");
    c.takeDamage(200);
    c.seewhatsup();

	return (0);
}


// int main() 
// {
    
//     ClapTrap defaultClap;
//     defaultClap.attack("Target X");

  
//     ClapTrap clap("CL4P-TP");
//     clap.attack("Target A");

  
//     ClapTrap copiedClap = clap;
//     copiedClap.takeDamage(5);

 
//     ClapTrap assignedClap;
//     assignedClap = clap;
//     assignedClap.beRepaired(3);

   
//     return 0;
// }
