#include "Decorateur.h"


void Plumage::chanter() {
	oiseau->chanter();
}
void Plumage::battreDesAiles() {
	oiseau->battreDesAiles();
}

void PlumageDoré::plumer() {
	cout << "Plumage dore ajoute" << endl;
}

void PlumageZebré::plumer() {
	cout << "Je suis zebre !" << endl;
}

void PlumageColoré::plumer() {
	cout << "Plumage colore ajoute !" << endl;
}
