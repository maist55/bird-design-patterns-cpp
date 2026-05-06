#include "DecorateurMystique.h"

void Mystique::chanter() {
	oiseau->chanter();
}
void Mystique:: battreDesAiles(){
	oiseau->battreDesAiles();
}

void Flammes::afficher() {
	cout << "Il fait chaud je lance mes flammes. FOWWWWWWW" << endl;
}

void Diamant::afficher() {
	cout << "Bouclier de DIAMANT !" << endl;
}

void Bouclier::afficher() {
	cout << "Bouclier de protection ultime !" << endl;
}

