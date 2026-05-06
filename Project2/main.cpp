#include "Adaptateur.h"
#include "DerivésDuck.h"
#include "Voiture.h"
#include "InterfaceBird.h"
#include "InterfaceFlyingBird.h"
#include "NonFlyingBird.h"
#include "DecorateurMystique.h"
#include "Decorateur.h"
#include "Duck.h"
#include "FlyingBirds.h"


using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>




int main() {
    cout << "=== Creation des oiseaux ===" << endl;
    unique_ptr<Mallard> mallard = make_unique<Mallard>("Lac", 100, 15);
    unique_ptr<Gadwall> gadwall = make_unique<Gadwall>("Lac de Vincennes", 100, 25);
    unique_ptr<WoodDuck> woodDuck = make_unique<WoodDuck>("Lac de Mormont", 112, 35);

    cout << "\n=== Decoration classique ===" << endl;
    unique_ptr<PlumageColoré> woodDuckColoré = make_unique<PlumageColoré>(woodDuck.release());
    woodDuckColoré->plumer();

    unique_ptr<PlumageZebré> gadwallzebré = make_unique<PlumageZebré>(gadwall.release());
    gadwallzebré->plumer();

    unique_ptr<PlumageDoré> mallardDoré = make_unique<PlumageDoré>(mallard.release());
    mallardDoré->plumer();

    cout << "\n=== Decoration mystique ===" << endl;
    unique_ptr<WoodDuck> wdMystique = make_unique<WoodDuck>("Forêt Enchantée", 105, 30);
    unique_ptr<Flammes> flammes = make_unique<Flammes>(wdMystique.release());
    flammes->afficher();

    unique_ptr<Gadwall> gdMystique = make_unique<Gadwall>("Rivière Sacrée", 110, 20);
    unique_ptr<Diamant> diamant = make_unique<Diamant>(gdMystique.release());
    diamant->afficher();

    unique_ptr<Mallard> mlMystique = make_unique<Mallard>("Étang Céleste", 120, 25);
    unique_ptr<Bouclier> bouclier = make_unique<Bouclier>(mlMystique.release());
    bouclier->afficher();

    cout << "\n=== Oiseaux volants ===" << endl;
    unique_ptr<Eagle> eagle = make_unique<Eagle>("Montagne", 150, 60);
    unique_ptr<Pigeon> pigeon = make_unique<Pigeon>("Ville", 40, 20);

    cout << "\nEagle :\n";
    eagle->choregraphieDanse();
    eagle->voler();

    cout << "\nPigeon :\n";
    pigeon->choregraphieDanse();
    pigeon->voler();

    cout << "\n=== Utilisation de l'adaptateur ===" << endl;
    unique_ptr<Adapteur> adaptervoiture = make_unique<Adapteur>();
    adaptervoiture->courir();

    cout << "\n=== Fin du programme ===" << endl;
    return 0;
}
