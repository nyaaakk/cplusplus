#include <iostream>

using namespace std;

class Arbre{

    //attributs
    private: ElCh2* pDebut;

    //constructeurs
    public:
    Arbre(){
        pDebut = nullptr;
    }

    Arbre(ElCh2* element){
        pDebut = element;
    }

    //destructeur
    public:
    ~Arbre();

    //getters - setters
    public:
    ElCh2* getPDebut(){
        return pDebut;
    }

    void setPDebut(ElCh2* newPDebut){
        pDebut = newPDebut;
    }

    //fonctions
    void ajouterDroite(double newDonnee){
        ElCh2* memoire = pDebut;
        ElCh2* element = new ElCh2(newDonnee);
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

    void ajouterGauche(double newDonnee){
        ElCh2* memoire = pDebut;
        ElCh2* element = new ElCh2(newDonnee);
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
        ElCh2* memoire = pDebut;
        if( memoire == nullptr ){
            cout << "l arbre est vide" << endl;
        }
        else{
            do{
                cout << memoire->getDonnee() << endl;
            }
            while( memoire->getSuivantDroite() != nullptr );
        }
    }
};