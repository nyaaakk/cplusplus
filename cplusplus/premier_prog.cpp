#include <iostream>

using namespace std;

class ElCh1{

    //attributs
    private:
    double donnee;
    ElCh1* suivant;

    //constructeur - getters - setters
    public:
    ElCh1(){
        donnee = 0;
        suivant = nullptr;
    }

    ElCh1(double newDonnee, ElCh1* newSuivant){
        donnee = newDonnee;
        suivant = newSuivant;
    }

    double getDonnee(){
        return donnee;
    }

    void setDonnee(double newDonnee){
        donnee = newDonnee;
    }

    ElCh1* getSuivant(){
        return suivant;
    }

    void setSuivant(ElCh1* newSuivant){
        suivant = newSuivant;
    }

    //fonctions
    void afficher(){
        cout << donnee << endl;
        cout << suivant << endl;
    }

};

class SuiteCh1{

    //attributs
    private: ElCh1* pDebut;

    //constructeur - getters - setters
    public:
    SuiteCh1(){
        pDebut = nullptr;
    }

    SuiteCh1(ElCh1 element){
        pDebut = &element;
    }

    //fonctions
    void ajouter(double newDonnee){
        ElCh1 element(newDonnee, pDebut);
        pDebut = &element;
    }

};

int main(void){

    SuiteCh1 suite1;
    suite1.ajouter(5);

    return 0;
}