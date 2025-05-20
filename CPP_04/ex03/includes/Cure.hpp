/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/14 22:11:58 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/17 20:04:59 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"
class Cure : public AMateria
{
	protected:
		std::string _type = "cure";

	public:
		Cure();
		Cure(std::string const &type);
		Cure(const Cure &copy);
		Cure &operator=(const Cure &copy);
		virtual ~Cure();

		Cure* clone() const;
};