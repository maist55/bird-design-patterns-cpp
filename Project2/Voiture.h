#pragma once

using namespace std;
#include <iostream>

class Voiture {
public:

	Voiture(const string& m, int r, int a) : nbreRoues(r), marque(m), anneeDeFabrication(a) {}

	virtual void mettreMoteurEnMarche();
	virtual void ouvrirPortiere();


private:
	int nbreRoues;
	string marque;
	int anneeDeFabrication;
};
