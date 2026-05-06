#include "Adaptateur.h"

void Adapteur::courir() {
	mettreMoteurEnMarche();
}

void Adapteur::chanter() {
	cout << "Bip bip je suis une voiture qui chante " << endl;
}

void Adapteur::battreDesAiles() {
	cout << "Je n'ai pas d'ailes, mais j'ouvre le capot..." << endl;
}
