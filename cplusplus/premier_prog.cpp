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

class Pile{

    //attributs
    private: ElCh1* pDebut;

    //constructeurs
    public:
    Pile(){
        pDebut = nullptr;
    }

    Pile(ElCh1* element){
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
                cout << "la pile n est pas aussi longue" << endl;
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

    void afficherPile(){
        ElCh1* memoire = pDebut;
        if( memoire == nullptr ){
            cout << "la pile est vide" << endl;
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

int main(void){

    SuiteCh1 suite1;
    suite1.ajouterEnQueue(5);
    suite1.ajouterEnQueue(10);
    suite1.ajouterEnQueue(15);
    suite1.ajouterEnQueue(20);
    suite1.supprimerEnQueue();

    suite1.afficherSuite();

    suite1.afficherElement(5);

    return 0;
}