#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

    private:


    public:
        ScavTrap();
        ScavTrap( std::string _name );
        ScavTrap( const ScavTrap &p );
        ScavTrap& operator=( const ScavTrap &p );
        ~ScavTrap();
        
        void attack( const std::string& target );
        void guardGate();
        
};

#endif