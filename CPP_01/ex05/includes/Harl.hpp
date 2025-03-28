/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/20 12:19:39 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/03/28 17:56:37 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	public:
		Harl(void);
		~Harl(void);
		
		void complain(std::string level);

	private:
		std::string __level;
		void __debug(void);
		void __info(void);
		void __warning(void);
		void __error(void);
		void (Harl::*ptr[4]) (void);

};

#endif