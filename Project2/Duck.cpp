#include "Duck.h"
	
string Duck::gethabitat() const {
	return habitat;
}
int Duck::getTaille() const {
	return taille;
}
int Duck::getVitesse() const {
	return vitesse;
}

void Duck::chanter() {
	cout << "BEEEEEEEP BEEEEEEEP BEEEEEEEPP, KHIZZZOUUUUU (CHANT)" << endl;
}
void Duck::battreDesAiles() {
	cout << "Je bats des ailes !" << endl;
}
	void Duck::nager()  {
	cout << "Gloup Gloup je  me noie. Je n'arrive pas à nager" << endl;
}
void Duck::courir() {
	cout << "La zigezon zinzon" << endl;
}
