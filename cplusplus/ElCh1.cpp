#include <iostream>

using namespace std;

template <typename T> class ElCh1{

    //attributs
    private:
    T donnee;
    ElCh1<T>* suivant;

    //constructeurs
    public:
    ElCh1(){
        donnee = 0;
        suivant = nullptr;
    }

    ElCh1(T newDonnee){
        donnee = newDonnee;
        suivant = nullptr;
    }

    ElCh1(T newDonnee, ElCh1<T>* newSuivant){
        donnee = newDonnee;
        suivant = newSuivant;
    }

    //destructeur
    public:
    ~ElCh1();

    //getters - setters
    public:
    T getDonnee(){
        return donnee;
    }

    void setDonnee(T newDonnee){
        donnee = newDonnee;
    }

    ElCh1<T>* getSuivant(){
        return suivant;
    }

    void setSuivant(ElCh1<T>* newSuivant){
        suivant = newSuivant;
    }

    //fonctions
    public:
    void afficherElement(){
        cout << donnee << endl;
    }

};