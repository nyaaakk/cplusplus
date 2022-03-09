#include <iostream>

using namespace std;

template<typename T>

class ElCh2{

    //attributs
    private:
    T donnee;
    ElCh2* suivantGauche;
    ElCh2* suivantDroite;

    //constructeurs
    public:
    ElCh2(){
        donnee = 0;
        suivantGauche = nullptr;
        suivantDroite = nullptr;
    }

    ElCh2(T newDonnee){
        donnee = newDonnee;
        suivantGauche = nullptr;
        suivantDroite = nullptr;
    }

    ElCh2(T newDonnee, ElCh2* newSuivant){
        donnee = newDonnee;
        suivantGauche = newSuivant;
        suivantDroite = nullptr;
    }

    //getters - setters
    public:
    T getDonnee(){
        return donnee;
    }

    void setDonnee(T newDonnee){
        donnee = newDonnee;
    }

    ElCh2* getSuivantGauche(){
        return suivantGauche;
    }

    ElCh2* getSuivantDroite(){
        return suivantDroite;
    }

    void setSuivantGauche(ElCh2* newSuivant){
        suivantGauche = newSuivant;
    }

    void setSuivantDroite(ElCh2* newSuivant){
        suivantDroite = newSuivant;
    }

    //fonctions
    public:
    void afficherElement(){
        cout << donnee << endl;
    }

};