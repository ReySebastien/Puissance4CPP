#ifndef JEU_H
#define JEU_H

class jeu
{
private:

    int _typeDeJeu;

public:
    jeu();
    virtual void afficheGrille();
    virtual void ajouteSymbole(int x);
    virtual bool testeVictoireVerticale();
    virtual bool testeVictoireHorizontale();
    virtual bool testeVictoireDiagonale();
    virtual bool testeNul();
    virtual void finTour();

};

#endif