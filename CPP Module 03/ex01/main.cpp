/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nloutfi <nloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 01:19:59 by nloutfi           #+#    #+#             */
/*   Updated: 2023/03/22 19:08:22 by nloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    // ClapTrap c;
    ScavTrap scav("akali");
    
    ScavTrap sc(scav);
    sc.beRepaired(10);
    sc.takeDamage(110);
    
    scav.attack("annie");
    scav.beRepaired(10);
    scav.guardGate();
    scav.takeDamage(110);
    scav.beRepaired(100);
    scav.takeDamage(10);
    
    return 0;
}