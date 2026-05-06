#pragma once
#include "InterfaceBird.h"
#include <iostream>
using namespace std;

class Plumage : public Bird {

protected:
	unique_ptr<Bird> oiseau;
public:
	Plumage(Bird* o) : oiseau(o) {}
	virtual void plumer() = 0;

	void chanter() override;
	void battreDesAiles() override;
};

class PlumageDoré : public Plumage {
public:
	PlumageDoré(Bird* o) : Plumage(o) {}
	void plumer() override;
};

class PlumageZebré : public Plumage {
public:
	PlumageZebré(Bird* o) : Plumage(o) {}
	void plumer() override;
};

class PlumageColoré : public Plumage {
public:
	PlumageColoré(Bird* o) : Plumage(o) {}
	void plumer() override;
};