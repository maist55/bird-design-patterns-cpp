#include "FlyingBirds.h"



string Pigeon::gethabitat() const {
	return habitat;
}
int Pigeon::getTaille() const {
	return taille;
}
int Pigeon::getVitesse() const {
	return vitesse;
}

void Pigeon::choregraphieDanse(){
	cout << "le Pigeon danse le MOONWALK" << endl;
}
void Pigeon::voler() {
	cout << "Le Pigeon vole de manière gracieuse" << endl;
}

void Pigeon::chanter() {
	cout << "Rou rouuu rouuu ! (chant du pigeon)" << endl;
}

void Pigeon::battreDesAiles() {
	cout << "Le pigeon bat doucement des ailes pour s’envoler depuis une statue." << endl;
}

string Eagle::gethabitat() const {
	return habitat;
}
int  Eagle::getTaille() const {
	return taille;
}
int  Eagle::getVitesse() const {
	return vitesse;
}

void  Eagle::choregraphieDanse() {
	cout << "L'aigle dans danse le TANGO" << endl;
}
void  Eagle::voler() {
	cout << "L'aigle vole au dessus d'un nid d'oiseaux" << endl;
}
void Eagle::chanter() {
	cout << "Screeeech ! (cri perçant de l’aigle)" << endl;
}

void Eagle::battreDesAiles() {
	cout << "L’aigle bat puissamment des ailes et prend de l’altitude." << endl;
}


