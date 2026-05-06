#pragma once
#include "InterfaceBird.h"
#include <iostream>
using namespace std;

class Mystique :public Bird {
protected:
	unique_ptr<Bird> oiseau;
public:
	Mystique(Bird* o) : oiseau(o) {}
	virtual void afficher() = 0;
	void chanter() override;
	void battreDesAiles() override;
};

class Flammes : public Mystique {
public:
	Flammes(Bird* o) : Mystique(o) {}
	virtual void afficher() override;
};

class Diamant : public Mystique {
public:
	Diamant(Bird* o) : Mystique(o) {}
	virtual void afficher() override;
};

class Bouclier : public Mystique {
public:
	Bouclier(Bird* o) : Mystique(o) {}
	virtual void afficher() override;

};