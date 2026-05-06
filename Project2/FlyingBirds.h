#pragma once
#include "InterfaceFlyingBird.h"
#include <iostream>
using namespace std;


class Pigeon : public FlyingBird {

public:
	Pigeon(const string& h, int t, int v) : habitat(h), taille(t), vitesse(v) {}
	string gethabitat() const;
	int getTaille() const;
	int getVitesse() const;
	virtual void chanter() override;
	virtual void battreDesAiles() override;
	virtual void choregraphieDanse() override;
	virtual void voler() override;

private:
	string habitat;
	int taille;
	int vitesse;

};

class Eagle : public FlyingBird {

public:
	Eagle(const string& h, int t, int v) : habitat(h), taille(t), vitesse(v) {}
	string gethabitat() const;
	int getTaille() const;
	int getVitesse() const;
	virtual void chanter() override;
	virtual void battreDesAiles() override;
	virtual void choregraphieDanse() override;
	virtual void voler() override;

private:
	string habitat;
	int taille;
	int vitesse;
};