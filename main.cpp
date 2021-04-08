#include "Grille.cpp"
#include "Puissance_4.cpp"
#include "JeuGrille.h"
#include "Tictactoe.cpp"
#include <iostream>
#include <string>


int main(){

    bool partiegagnee = false;
    JeuGrille * jeu;

    std:: cout << "TicTacToe (0) ou Puissance4 (1) ?";
    int choix;
    std::cin >> choix;
    if(choix == 0){ jeu = new Tictactoe();} else {jeu = new Puissance4();}

    int numeroCase;


    while(!partiegagnee && !jeu->testeJeuNul()){
        
        jeu->afficheGrille();
        std::cin >> numeroCase;
        if (choix ==0) {jeu->ajouteSymbole(numeroCase%3, numeroCase/3);}
        else {jeu-> ajouteSymbole(numeroCase,0);}
        partiegagnee = jeu->testeVictoireDiagonale() || jeu->testeVictoireHorizontale() || jeu->testeVictoireVerticale();
        jeu->finTour();
    }

    
    
    return 0;
}