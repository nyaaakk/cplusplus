#include <iostream>

class ElCh2{

    //attributs
    private:
    double donnee;
    ElCh2* suivantGauche;
    ElCh2* suivantDroite;

    //constructeurs
    public:
    ElCh2(){
        donnee = 0;
        suivantGauche = nullptr;
        suivantDroite = nullptr;
    }

    ElCh2(double newDonnee){
        donnee = newDonnee;
        suivantGauche = nullptr;
        suivantDroite = nullptr;
    }

    ElCh2(double newDonnee, ElCh2* newSuivant){
        donnee = newDonnee;
        suivantGauche = newSuivant;
        suivantDroite = nullptr;
    }

    //getters - setters
    public:
    double getDonnee(){
        return donnee;
    }

    void setDonnee(double newDonnee){
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