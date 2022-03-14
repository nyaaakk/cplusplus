#include <iostream>

using namespace std;

class ElCh1{

    //attributs
    private:
    double donnee;
    ElCh1* suivant;

    //constructeurs
    public:
    ElCh1(){
        donnee = 0;
        suivant = nullptr;
    }

    ElCh1(double newDonnee){
        donnee = newDonnee;
        suivant = nullptr;
    }

    ElCh1(double newDonnee, ElCh1* newSuivant){
        donnee = newDonnee;
        suivant = newSuivant;
    }

    //getters - setters
    public:
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
    public:
    void afficherElement(){
        cout << donnee << endl;
    }

};