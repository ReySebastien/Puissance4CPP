#ifndef JEUGRILLE_H
#define JEUGRILLE_H

#include "Grille.h"
#include <string>

class JeuGrille{

    private:
        Grille _grilleDeJeu;
        int _numeroTour;
        char _symboleCourant;

    public:
        JeuGrille(){}
        virtual void afficheGrille(){}
        virtual void ajouteSymbole(int x, int y){}
        virtual bool testeVictoireVerticale(){}
        virtual bool testeVictoireHorizontale(){}
        virtual bool testeVictoireDiagonale(){}
        virtual bool testeJeuNul(){}

        virtual void finTour(){}

};

#endif