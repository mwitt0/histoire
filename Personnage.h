//
// Created by antoine on 17/11/2021.
//

#ifndef EVALUATION_PERSONNAGE_H
#define EVALUATION_PERSONNAGE_H
#include <string>
#include "Equipement.h"

class Personnage {

public:
    Personnage();
    void recevoirDegats(int degats);
    void infligerDegats(Personnage &cible, int degats) const;
    
    Equipement* arme;
    Equipement* armure;

    int type;
    int getPV();
    void setPV(int);
    Personnage(std::string nom,int type,Equipement* arme,Equipement* armure,int PV);
    Personnage(const char string[8]);
    
protected:
    int PV;
    std::string nom;
};


#endif //EVALUATION_PERSONNAGE_H
