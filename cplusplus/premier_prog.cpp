#include <iostream>
#include "file.cpp"
#include "pile.cpp"
#include "suite.cpp"
#include "arbre.cpp"

using namespace std;

int main(void){

    Pile<double> pile1;

    pile1.ajouterEnTete<double>(12);
    pile1.ajouterEnTete<double>(47);
    pile1.ajouterEnTete<double>(67);
    pile1.ajouterEnTete<double>(89);
    pile1.ajouterEnTete<double>(18);
    pile1.ajouterEnTete<double>(24);

    pile1.afficherPile();

    pile1.supprimerEnTete();
    pile1.supprimerEnTete();

    pile1.afficherPile();

    return 0;
}