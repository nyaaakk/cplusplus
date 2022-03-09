#include <iostream>
#include "file.cpp"
#include "pile.cpp"
#include "suite.cpp"
#include "arbre.cpp"

using namespace std;

template<typename T>

int main(void){

    Pile<double> pile1;

    pile1.ajouterEnTete(12);
    pile1.ajouterEnTete(47);
    pile1.ajouterEnTete(67);
    pile1.ajouterEnTete(89);
    pile1.ajouterEnTete(18);
    pile1.ajouterEnTete(24);

    pile1.afficherPile();

    pile1.supprimerEnTete();
    pile1.supprimerEnTete();

    pile1.afficherPile();

    return 0;
}