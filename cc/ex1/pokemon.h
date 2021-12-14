/**
  * File:     pokemon.h
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  class Pokemon
  */

#include <string>

class Pokemon {
public:
    Pokemon(std::string name, int pv);
    int pv() const;
    void update_pv(int new_value);
    std::string name() const;

    // Fonction friend
    //friend bool operator< (const Pokemon& p1, const Pokemon& p2);
    bool operator< (const Pokemon& p1);

    bool fight(Pokemon &p);
private:
    std::string _name;
    int _pv;
};
// Fonction helper
//bool operator< (const Pokemon& p1, const Pokemon& p2);

// Fonction helper
bool fight2(Pokemon& p1, Pokemon& p2);

