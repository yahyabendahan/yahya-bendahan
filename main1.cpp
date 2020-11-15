#include <iostream>
#include <string>
#include "Personnage.h"

using namespace std;


int main()
{
    // Création des personnages
    Personnage yahya, amine("Epee debutant", 20);

    // Au combat !
    amine.attaquer(yahya);
    yahya.boirePotionDeVie(20);
    amine.attaquer(yahya);
    yahya.attaquer(amine);
    amine.changerArme("epee rare", 40);
    amine.attaquer(yahya);
    yahya.changerArme("epee epic", 60);
    yahya.attaquer(amine);
    // Temps mort ! Voyons voir la vie de chacun...
    cout << "yahya" << endl;
    yahya.afficherEtat();
    cout << endl << "amine" << endl;
    amine.afficherEtat();

    return 0;
}
