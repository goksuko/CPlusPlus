/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:19:46 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/20 12:19:48 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Harl.hpp"

int main(void)
{
    Harl    harl;
    
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("ANOTHER LEVEL");
    return 0;
}