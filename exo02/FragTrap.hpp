/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bloisel <bloisel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 06:22:25 by bloisel           #+#    #+#             */
/*   Updated: 2024/12/01 06:38:49 by bloisel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP


#include "ClapTrap.hpp"

// Same things for the attributes, but with different values this time:
// • Name, which is passed as parameter to a constructor
// • Hit points (100), represent the health of the ClapTrap
// • Energy points (100)
// • Attack damage (30)
// FragTrap has a special capacity too:
// void highFivesGuys(void);

class FragTrap : public ClapTrap
{
				public:
    	FragTrap(const std::string& name);
					FragTrap();
    	FragTrap(const FragTrap& other);
    	FragTrap& operator=(const FragTrap& other);
    	~FragTrap();
					void seewhatsup3();
					void highFivesGuys(void); 
};
// Class FragTrap : public ClapTrap
// {



	
// };







#endif