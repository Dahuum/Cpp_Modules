#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    private:
        std::string name;
        unsigned int hitPoint;
        unsigned int energyPoint;
        unsigned int attackDamage;
    public:
        ClapTrap();
        ClapTrap( const std::string& _name );
        ClapTrap( const ClapTrap& other );
        ClapTrap& operator=( const ClapTrap& other );
        ~ClapTrap();

        void attack( const std::string& target );
        void takeDamage( unsigned int amount );
        void beRepaired( unsigned int amount );

        // getters
        std::string getName() const;
        unsigned int getHitPoints() const;
        unsigned int getEnergyPoints() const;
        unsigned int getAttackDamage() const;

        // setters
        void setName(const std::string& __name);
        void setHitPoints(unsigned int __hitPoints);
        void setEnergyPoints(unsigned int __energyPoints);
        void setAttackDamage(unsigned int __attackDamage);
        
};

#endif