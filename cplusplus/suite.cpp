#include "ElCh1.cpp"

using namespace std;

template<typename T>

class SuiteCh1{

    //attributs
    private: ElCh1* pDebut;

    //constructeurs
    public:
    SuiteCh1(){
        pDebut = nullptr;
    }

    SuiteCh1(ElCh1* element){
        pDebut = element;
    }

    //getters - setters
    public:
    ElCh1* getPDebut(){
        return pDebut;
    }

    void setPDebut(ElCh1* newPDebut){
        pDebut = newPDebut;
    }

    //fonctions
    void ajouterEnTete(double newDonnee){
        ElCh1* element = new ElCh1(newDonnee, pDebut);
        pDebut = element;
    }

    void supprimerEnTete(){
        if( pDebut == nullptr ){
            cout << "la suite est vide" << endl;
        }
        else{
            pDebut = pDebut->getSuivant();
        }
    }

    void ajouterEnQueue(double newDonnee){
        ElCh1* memoire = pDebut;
        ElCh1* element = new ElCh1(newDonnee);
        if( memoire == nullptr ){
            pDebut = element;
        }
        else{
            while( memoire->getSuivant() != nullptr ){
                memoire = memoire->getSuivant();
            }
            memoire->setSuivant(element);
        }
    }

    void supprimerEnQueue(){
        ElCh1* memoire = pDebut;
        if( memoire == nullptr ){
            cout << "la suite est vide" << endl;
        }
        else if( memoire->getSuivant() == nullptr ){
            pDebut = nullptr;
        }
        else{
            while( memoire->getSuivant()->getSuivant() != nullptr ){
                memoire = memoire->getSuivant();
            }
            memoire->setSuivant(nullptr);
        }
    }

    void afficherElement(int n){
        ElCh1* memoire = pDebut;
        if( memoire == nullptr ){
            cout << "la suite est vide" << endl;
        }
        else{
            int i = 0;
            while( memoire->getSuivant() != nullptr ){
                memoire = memoire->getSuivant();
                i++;
            }
            if( i < n ){
                cout << "la suite n est pas aussi longue" << endl;
            }
            else{
                memoire = pDebut;
                for( i = 0; i < n; i++ ){
                    memoire = memoire->getSuivant();
                }
                cout << "[" << n << "] " << memoire->getDonnee() << endl;
            }
        }

    }

    void afficherSuite(){
        ElCh1* memoire = pDebut;
        if( memoire == nullptr ){
            cout << "la suite est vide" << endl;
        }
        else{
            int i = 0;
            do{
                cout << "[" << i << "] " << memoire->getDonnee() << endl;
                memoire = memoire->getSuivant();
                i++;
            }
            while( memoire != nullptr );
        }

    }

};