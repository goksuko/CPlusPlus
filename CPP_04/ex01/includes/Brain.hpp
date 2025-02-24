#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <array>

class Brain 
{
    protected:
        std::string ideas[100];
        int         count;

    public:
        Brain();
        Brain(const Brain &copy);
        Brain &operator=(const Brain &copy);
        ~Brain();

        const std::string& getIdea(int index) const;
		void addIdea(const std::string& idea);	
};
