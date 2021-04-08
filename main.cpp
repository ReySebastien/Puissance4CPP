#include "Grille.cpp"
#include "Puissance_4.cpp"
//#include "jeu.cpp"
#include "Tictactoe.cpp"
#include <iostream>
#include <string>


int main(){

    bool partiegagnee = false;
    Puissance4 jeu = Puissance4();
    int numeroCase;

    /*Jeu jeu;
    int numeroCase;
    int choix; 
    std::cin >> choix;

    if(choix == 1){
        jeu = Puissance4();
    }

    else{
        jeu = Tictactoe();
    }*/

    //Grille maGrilleDeTest = Grille(7,6);
    //maGrilleDeTest.affiche();


    while(!partiegagnee && !jeu.testeJeuNul()){
        
        jeu.afficheGrille();
        std::cin >> numeroCase;
        jeu.ajouteSymbole(numeroCase%3, numeroCase/3);
        partiegagnee = jeu.testeVictoireDiagonale() || jeu.testeVictoireHorizontale() || jeu.testeVictoireVerticale();
        jeu.finTour();
    }

    
    
    return 0;
}