/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <akaya-oz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/16 22:38:58 by akaya-oz      #+#    #+#                 */
/*   Updated: 2024/12/16 22:39:01 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <ctype.h>
#include <iostream>

// The [`iostream`] library in C++ is a part of the C++ Standard Library 
// that provides functionalities for input/output (I/O) operations. 
// It defines several classes and objects to perform both console I/O 
// (using `std::cin` for input and `std::cout` for output) and file I/O
// (using `std::ifstream` for input files and `std::ofstream` for output files), among others.

// The `std::` prefix before [`strlen`] indicates that the function is 
// being called from the C++ Standard Library's namespace.

// [`cout`] stands for "character output stream." It's an object of class
// `ostream` that represents the standard output stream.

// `<<` is the insertion operator. It is used to insert the data that follows
// it into the [`cout`] stream.

int	main(int argc, char **argv)
{
	int		i;
	size_t	length;
	size_t	j;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	if (argc > 1)
	{
		while (i < argc)
		{
			length = std::strlen(argv[i]);
			j = 0;
			while(j < length)
			{
				argv[i][j] = std::toupper(argv[i][j]);
				j++;
			}
			if (i != argc - 1)
				std::cout << argv[i] << " ";
			else
				std::cout << argv[i] << "\n";
			i++;
		}
	}
	return (0);
}