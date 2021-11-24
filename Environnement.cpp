//
// Created by antoine on 17/11/2021.
//
#include "Personnage.h"
#include "Environnement.h"
#include "Equipement.h"
#include "Phrase.h"
#include <string>
Environnement::Environnement(std::string name)
{
    Equipement* arme = new Equipement(1);
    Equipement* armure = new Equipement(1);
    Personnage* res = new Personnage("bonjour",1,arme,armure);
    this->personnage = res;
    this->name  = name;
}

