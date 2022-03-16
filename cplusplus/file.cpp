#include <iostream>

using namespace std;

template <typename T> class File{

    //attributs
    private: ElCh1<T>* pDebut;

    //constructeur
    public:
    File(){
        pDebut = nullptr;
    }

    File(ElCh1<T>* element){
        pDebut = element;
    }

    //destructeur
    public:
    ~File();

    //getters - setters
    public:
    ElCh1<T>* getPDebut(){
        return pDebut;
    }

    void setPDebut(ElCh1<T>* newPDebut){
        pDebut = newPDebut;
    }

    //fonctions
    void Enfiler(T newDonnee){
        ElCh1<T>* memoire = pDebut;
        ElCh1<T>* element = new ElCh1<T>(newDonnee);
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

    void Defiler(){
        if( pDebut == nullptr ){
            cout << "la suite est vide" << endl;
        }
        else{
            pDebut = pDebut->getSuivant();
        }
    }

    void afficherElement(int n){
        ElCh1<T>* memoire = pDebut;
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

    void afficherFile(){
        ElCh1<T>* memoire = pDebut;
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