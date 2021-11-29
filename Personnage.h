//
// Created by antoine on 17/11/2021.
//

#ifndef EVALUATION_PERSONNAGE_H
#define EVALUATION_PERSONNAGE_H
#include <string>
#include "Equipement.h"

class Personnage {

public:
    Equipement* arme;
    Equipement* armure;
    std::string nom;
    int type;
    int getPV();
    void setPV(int PV);
    Personnage(std::string nom,int type,Equipement* arme,Equipement* armure);
    Personnage(const char string[8]);
};


#endif //EVALUATION_PERSONNAGE_H
