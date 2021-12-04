//
// Created by antoine on 17/11/2021.
//

#ifndef EVALUATION_ENVIRONNEMENT_H
#define EVALUATION_ENVIRONNEMENT_H
#include <iostream>
#include <map>
#include <string>
class Environnement {

private:
    std::map<int, std::string> typesArmes = {{1, "Epee",},
                                   {2, "Dagues",},
                                   {3, "Baton",}};
    std::map<int, std::string> typesArmures = {{1, "Cuirasse",},
                                     {2, "Cuir",},
                                     {3, "Tissus",}};
    std::map<std::string,int > typesPersonnage = {{"Guerrier",1,},
                                     {"Rodeur",2, },
                                     {"Mage",3, }};
    Personnage* personnage;
    std::string name;

public:
    void reprPersonnage();
    void preparerPiece(Phrase *);
    Environnement(std::string name);
};


#endif //EVALUATION_ENVIRONNEMENT_H
