template <typename T> class Pile{

    //attributs
    private: ElCh1<T>* pDebut;

    //constructeurs
    public:
    Pile(){
        pDebut = nullptr;
    }

    Pile(ElCh1<T>* element){
        pDebut = element;
    }

    //getters - setters
    public:
    ElCh1<T>* getPDebut(){
        return pDebut;
    }

    void setPDebut(ElCh1<T>* newPDebut){
        pDebut = newPDebut;
    }

    //fonctions
    public:
    void Empiler(T newDonnee){
        ElCh1<T>* element = new ElCh1<T>(newDonnee, pDebut);
        pDebut = element;
    }

    void Depiler(){
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
            cout << "la pile est vide" << endl;
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
        ElCh1<T>* memoire = pDebut;
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