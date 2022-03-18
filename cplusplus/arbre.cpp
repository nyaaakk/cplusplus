#include <iostream>

using namespace std;

template <typename T> class Arbre{

    //attributs
    private: ElCh2<T>* pDebut;

    //constructeurs
    public:
    Arbre(){
        pDebut = nullptr;
    }

    Arbre(ElCh2<T>* element){
        pDebut = element;
    }

    //destructeur
    public:
    ~Arbre();

    //getters - setters
    public:
    ElCh2<T>* getPDebut(){
        return pDebut;
    }

    void setPDebut(ElCh2<T>* newPDebut){
        pDebut = newPDebut;
    }

    //fonctions
    void ajouterDroite(T newDonnee){
        ElCh2<T>* memoire = pDebut;
        ElCh2<T>* element = new ElCh2(newDonnee);
        if( memoire == nullptr ){
            pDebut = element;
        }
        else{
            while( memoire->getSuivantDroite() != nullptr ){
                memoire = memoire->getSuivantDroite();
            }
            memoire->setSuivantDroite(element);
        }
    }

    void ajouterGauche(T newDonnee){
        ElCh2<T>* memoire = pDebut;
        ElCh2<T>* element = new ElCh2(newDonnee);
        if( memoire == nullptr ){
            pDebut = element;
        }
        else{
            while( memoire->getSuivantGauche() != nullptr ){
                memoire = memoire->getSuivantGauche();
            }
            memoire->setSuivantGauche(element);
        }
    }

    void afficherArbre(){
        ElCh2<T>* memoire = pDebut;
        if( memoire == nullptr ){
            cout << "l arbre est vide" << endl;
        }
        else{
            cout << "L'arbre n'est pas vide" << endl;
        }
    }
};