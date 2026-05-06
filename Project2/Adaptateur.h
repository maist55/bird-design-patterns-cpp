#pragma once
#include "InterfaceBird.h"
#include "Voiture.h"

class Adapteur : public Bird, private Voiture {

public:

	Adapteur() : Voiture("Tesla", 4, 2022) {}

	void courir();

	void chanter() override;

	void battreDesAiles() override;
};