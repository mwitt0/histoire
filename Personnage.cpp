//
// Created by antoine on 17/11/2021.
//

#include "Personnage.h"
Personnage::Personnage(std::string nom, int type,Equipement* arme,Equipement* armure) {
    this->nom = nom;
    this->type = type;
    this->arme=arme;
    this->armure=armure;
}
Personnage::Personnage(const char string[8]) {

}
void Personnage::recevoirDegats(int degats)
{
    PV -= degats;
}
 
void Personnage::infligerDegats(Personnage &cible, int degats) const
{
    cible.recevoirDegats(degats);
}
