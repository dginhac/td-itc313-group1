/**
  * File:     pokemon.cpp
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2021
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique
  * Summary:  Class Pokemon : implementation
  */

#include "pokemon.h"

Pokemon::Pokemon (std::string name, int pv) : _name(name), _pv(pv) {}

int Pokemon::pv() const {
    return _pv;
}

void Pokemon::update_pv(int new_value) {
    _pv = new_value;
}

bool Pokemon::fight(Pokemon &p) {
    if (*this < p) {
        _pv -=5;
        p.update_pv(p.pv()+5);
        return false;
    }
    _pv +=5;
    p.update_pv(p.pv()-5);
    return true;
}

std::string Pokemon::name() const {
    return _name;
}

// Method
bool Pokemon::operator< (const Pokemon& p) {
    return (_pv < p.pv());
}

/* fonction helper
bool operator< (const Pokemon& p1, const Pokemon& p2) {
    return (p1.pv()<p2.pv());
}
*/

/* fonction friend
bool operator< (const Pokemon& p1, const Pokemon& p2) {
    return (p1._pv<p2._pv);
}
*/
// Fonction helper
bool fight2(Pokemon& p1, Pokemon& p2) {
    if (p1 < p2) {
        p1.update_pv(p1.pv()-5);
        p2.update_pv(p2.pv()+5);
        return false;
    }
    p1.update_pv(p1.pv()+5);
    p2.update_pv(p2.pv()-5);
    return true;
}