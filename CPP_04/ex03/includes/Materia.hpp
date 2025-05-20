/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Materia.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/14 22:12:05 by akaya-oz      #+#    #+#                 */
/*   Updated: 2025/05/17 19:50:41 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      
#define RED     "\033[31m"      
#define GREEN   "\033[32m"    
#define YELLOW  "\033[33m"   
#define BLUE    "\033[34m"     
#define MAGENTA "\033[35m"    
#define CYAN    "\033[36m"   
#define WHITE   "\033[37m"     
#define BOLDBLACK   "\033[1m\033[30m"      
#define BOLDRED     "\033[1m\033[31m"      
#define BOLDGREEN   "\033[1m\033[32m"     
#define BOLDYELLOW  "\033[1m\033[33m"      
#define BOLDBLUE    "\033[1m\033[34m"     
#define BOLDMAGENTA "\033[1m\033[35m"      
#define BOLDCYAN    "\033[1m\033[36m"      
#define BOLDWHITE   "\033[1m\033[37m"      

#include <iostream>
#include <string>
#include "Character.hpp"

// The purpose of an abstract class is 
// to provide an appropriate base class 
// from which other classes can inherit. 
// Abstract classes cannot be used to instantiate objects and 
// serves only as an interface.

class ICharacter;
class AMateria 
{
	protected:
		std::string _type;

	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &copy);
		AMateria &operator=(const AMateria &copy);
		virtual ~AMateria();

		std::string const &getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};