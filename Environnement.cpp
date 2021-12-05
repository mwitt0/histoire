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
    Personnage* res = new Personnage("bonjour",1,arme,armure,1);
    this->personnage = res;
    this->name  = name;
}
void Environnement::preparerPiece(Phrase* phrase){
    //TODO creer la classe piece qui interprète les instruction et creer leurs objet
    //TODO attribuer les numéros aux pièces
    std::vector<int> inst = phrase->seekInstruction();
    std::cout << inst[1] <<"\n" ;
    //Piece->welcome = phrase->extraire(0,inst[0]-1);
    //Piece->instr = phrase;
    //Piece->processInstr();
}
