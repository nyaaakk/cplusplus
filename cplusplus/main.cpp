#include <iostream>
#include "ElCh1.cpp"
#include "pile.cpp"
#include "file.cpp"
#include "liste.cpp"

using namespace std;

int main(void){

    SuiteCh1<double> pile1;

    pile1.ajouterEnTete(65);
    pile1.ajouterEnQueue(40);
    pile1.supprimerEnQueue();

    pile1.afficherSuite();

    return 0;
}