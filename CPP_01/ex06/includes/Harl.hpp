#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	public:
		Harl(void);
		~Harl(void);
		
		void complain( std::string level );

	private:
		std::string _level;
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void switch_off( void );
		void (Harl::*ptr[5]) ( void );
    
    public:

};

#endif