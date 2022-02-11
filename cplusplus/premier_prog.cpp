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
        ElCh1 element(newDonnee, pDebut);
        pDebut = &element;
    }

    void supprimerEnTete(){
        pDebut = pDebut->getSuivant();
    }

    void afficherElement(int n){

    }

    void afficherSuite(){
        ElCh1* memoire = pDebut;
        if( memoire == nullptr ){
            cout << "La chaine est vide" << endl;
        }
        else{
            int i = 0;
            do{
                cout << "[ " << i << " ] - " << memoire->getDonnee() << endl;
                memoire = memoire->getSuivant();
                i++;
            }
            while( memoire != nullptr );
        }

    }

};

int main(void){

    ElCh1 element1(5);
    ElCh1 element2(10, &element1);
    ElCh1 element3(15, &element2);
    SuiteCh1 suite1(&element3);

    suite1.afficherSuite();
    

    return 0;
}