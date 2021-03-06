#include <iostream>

using namespace std;

template <typename T> class ElCh2{

    //attributs
    private:
    T donnee;
    ElCh2<T>* suivantGauche;
    ElCh2<T>* suivantDroite;

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

    //destructeur
    public:
    ~ElCh2();

    //getters - setters
    public:
    T getDonnee(){
        return donnee;
    }

    void setDonnee(T newDonnee){
        donnee = newDonnee;
    }

    ElCh2<T>* getSuivantGauche(){
        return suivantGauche;
    }

    ElCh2<T>* getSuivantDroite(){
        return suivantDroite;
    }

    void setSuivantGauche(ElCh2<T>* newSuivant){
        suivantGauche = newSuivant;
    }

    void setSuivantDroite(ElCh2<T>* newSuivant){
        suivantDroite = newSuivant;
    }

    //fonctions
    public:
    void afficherElement(){
        cout << donnee << endl;
    }

};