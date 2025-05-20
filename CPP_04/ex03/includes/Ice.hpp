/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/14 22:12:02 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/17 20:04:57 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"	
class Ice : public AMateria
{
	protected:
		std::string _type = "ice";
	
	public:
		Ice();
		Ice(std::string const &type);
		Ice(const Ice &copy);
		Ice &operator=(const Ice &copy);
		virtual ~Ice();

		Ice* clone() const;
};