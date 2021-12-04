//
// Created by antoine on 08/10/2021.
//
#include "Phrase.h"

// Definition du constructeur
Phrase::Phrase(std::string titre)
{
    this -> titre = titre;
}
void Phrase::SetOrdre(int ordre) {
    this->ordre = ordre;
}
void Phrase::AjouterMot(std::string c) {
    this->phrase.push_back(c);
    this->length++;
}
std::vector<std::string> Phrase::GetPhrase() {
    return this->phrase;
}
std::string Phrase::GetTitre()
{
    return this->titre;
}
Phrase* Phrase::extraire(int indexd, int indexf)
// creer une sous phrase de la phrase
{
    Phrase* tv1 = new Phrase ("marque");
    for (int i = indexd; i < indexf+1 ;i++){
        tv1->AjouterMot(this->phrase[i]);
    }
    return tv1;
}
void Phrase::__repr__()
{
    for (std::string n : this->phrase) {
        std::cout << n << " ";
    }
    std::cout <<" " << std::endl;
;}
std::vector<int> Phrase::seekInstruction() {
    //TODO on pourrait faire ca recursivement mais faudrait merge des listes
    std::vector<int> inst;
    int deb = 0;
    int siz = 0;
    for(int i=0; i<this->length;i++) {
        if (phrase[i].find('*') != std::string::npos) {
            inst.push_back(i);
            if(deb != 0){
                inst.push_back(i-1);
            }
            deb = 1;
            siz++;
            std::cout << "Found \n";
        }
    }
    if(siz==0){
        inst.push_back(this->length);
    }else if(siz%2 != 0){
        inst.push_back(this->length);
    }
    return inst;
}

