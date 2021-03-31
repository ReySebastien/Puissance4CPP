#include "Grille.cpp"
#include "Puissance_4.cpp"
#include <iostream>
#include <string>


int main(){

    bool partiegagnee = false;
    Puissance4 jeu = Puissance4();
    int numeroCase;

    //Grille maGrilleDeTest = Grille(7,6);
    //maGrilleDeTest.affiche();


    while(!partiegagnee && !jeu.testeJeuNul()){
        
        jeu.afficheGrille();
        std::cin >> numeroCase;
        jeu.ajouteSymbole(numeroCase);
        partiegagnee = jeu.testeVictoireDiagonale() || jeu.testeVictoireHorizontale() || jeu.testeVictoireVerticale();
        jeu.finTour();
    }

    
    
    return 0;
}