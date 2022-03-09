#include "ElCh2.cpp"

using namespace std;

template<typename T>

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

    //getters - setters
    public:
    ElCh2* getPDebut(){
        return pDebut;
    }

    void setPDebut(ElCh2* newPDebut){
        pDebut = newPDebut;
    }

    //fonctions
    void ajouterDroite(T newDonnee){
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

    void ajouterGauche(T newDonnee){
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