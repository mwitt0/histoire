//
// Created by antoine on 08/10/2021.
//

#ifndef EVALUATION_TELEVISION_H
#define EVALUATION_TELEVISION_H

#include <iostream>
#include <string>
#include <vector>
class Phrase {
private :
    int chaine;
    std::vector<std::string> phrase;
    std::string titre;
    int ordre;

    int length = 0;
public:
    //Méthodes
    std::vector<int> seekInstruction();
    void SetOrdre(int ordre);
    void AjouterMot(std::string c);
    void __repr__();
    Phrase* extraire(int,int);
    std::vector<std::string> GetPhrase();
    std::string GetTitre();
    // Constructeur
    Phrase(std::string phrase);
};


#endif //EVALUATION_TELEVISION_H
