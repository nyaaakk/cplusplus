#include <iostream>

//ElCh1
#ifndef header_ElCh1
#define header_ElCh1
    class ElCh1{

        //attributs
        private:
        double donnee;
        ElCh1* suivant;

        //constructeurs
        public:
        ElCh1();

        ElCh1(double);

        ElCh1(double, ElCh1*);

        //getters - setters
        public:
        double getDonnee();

        void setDonnee(double);

        ElCh1* getSuivant();

        void setSuivant(ElCh1*);

        //fonctions
        public:
        void afficherElement();
    };
#endif

//Pile
#ifndef header_pile
#define header_pile
    class Pile{

        //attributs
        private: ElCh1* pDebut;

        //constructeurs
        public:
        Pile();

        Pile(ElCh1*);

        //getters - setters
        public:
        ElCh1* getPDebut();

        void setPDebut(ElCh1*);

        //fonctions
        public:
        void ajouterEnTete(double);

        void supprimerEnTete();

        void afficherElement(int);

        void afficherPile();
    };
#endif