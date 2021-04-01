#ifndef JEU_H
#define JEU_H

class Jeu
{
private:

    int _typeDeJeu;

public:
    Jeu();
    virtual void afficheGrille();
    virtual void ajouteSymbole(int x);
    virtual bool testeVictoireVerticale();
    virtual bool testeVictoireHorizontale();
    virtual bool testeVictoireDiagonale();
    virtual bool testeJeuNul();
    virtual void finTour();

};

#endif