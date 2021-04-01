#ifndef PUISSANCE4_CPP
#define PUISSANCE4_CPP

#include "Grille.h"
#include "Puissance_4.h"
#include <iostream>


    Puissance4::Puissance4() : _symboleCourant('X'), _grilleDeJeu(7,6) {}

    void Puissance4::afficheGrille(){
        _grilleDeJeu.affiche();
    }

    void Puissance4::ajouteSymbole(int x){
        int y = 0; 
        for(int i=0; i<6; i++){
            if (_grilleDeJeu.getContent(x,i)== ' ')
            {
            y = i;
            }
        }

        _grilleDeJeu.setContent(x,y,_symboleCourant);
    }

    bool Puissance4::testeVictoireVerticale(){
        for(int i=0;i<2;i++){
            if(_grilleDeJeu.getContent(0,i)==_grilleDeJeu.getContent(1,i)
            && _grilleDeJeu.getContent(0,i)==_grilleDeJeu.getContent(2,i)
            && _grilleDeJeu.getContent(0,i)==_grilleDeJeu.getContent(3,i)
            && _grilleDeJeu.getContent(0,i)!=' ')
            {return true;}
        }
        return false;
    }

    bool Puissance4::testeVictoireHorizontale(){
        for(int i=0;i<2;i++){
            if(_grilleDeJeu.getContent(i,0)==_grilleDeJeu.getContent(i,1)
            && _grilleDeJeu.getContent(i,0)==_grilleDeJeu.getContent(i,2)
            && _grilleDeJeu.getContent(i,0)==_grilleDeJeu.getContent(i,3)
            && _grilleDeJeu.getContent(i,0)!=' ')
            {return true;}
        }
        return false;   
    }

    bool Puissance4::testeVictoireDiagonale(){
        if(_grilleDeJeu.getContent(0,0)==_grilleDeJeu.getContent(1,1)
            && _grilleDeJeu.getContent(0,0)==_grilleDeJeu.getContent(2,2)
            && _grilleDeJeu.getContent(0,0)==_grilleDeJeu.getContent(3,3)
            && _grilleDeJeu.getContent(0,0)!=' ')
            {return true;}
        if(_grilleDeJeu.getContent(2,0)==_grilleDeJeu.getContent(1,1)
            && _grilleDeJeu.getContent(2,0)==_grilleDeJeu.getContent(0,2)
            && _grilleDeJeu.getContent(2,0)!=' ')
            {return true;}
        return false;
    }

    bool Puissance4::testeJeuNul(){
        return _numeroTour==43;
        }

    void Puissance4::finTour(){
        _symboleCourant=='X'?_symboleCourant='O':_symboleCourant='X';
        _numeroTour++;
   }

#endif