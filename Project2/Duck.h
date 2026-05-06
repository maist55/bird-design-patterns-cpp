#pragma once
#include "NonFlyingBird.h"
#include <iostream>
using namespace std;

class Duck : public NonFlyingBird {

public:
	Duck(const string& h, int t, int v) : habitat(h), taille(t), vitesse(v) {}

	string gethabitat() const;
	int getTaille() const;
	int getVitesse() const;

	virtual void chanter() override;
	virtual void battreDesAiles() override;
	virtual void nager() override;
	virtual void courir() override;
private:
	string habitat;
	int taille;
	int vitesse;

};