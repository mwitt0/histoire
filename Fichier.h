//
// Created by antoine on 27/10/2021.
//

#ifndef EVALUATION_FICHIER_H
#define EVALUATION_FICHIER_H
#include <fstream>

class Fichier {
private :
    std::string chemin;
public :
    Phrase* lireFichier();

    Fichier(std::string);
};
// TODO decouper les phrases aux points lier avec actions possible en fonction du text

#endif //EVALUATION_FICHIER_H
