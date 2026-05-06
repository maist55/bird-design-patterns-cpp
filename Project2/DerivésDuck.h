#pragma once
#include "Duck.h"
#include <iostream>
using namespace std;


class Mallard : public Duck {

public:
	Mallard(const string& h, int t, int v) : Duck(h, t, v) {}


	virtual void battreDesAiles() override;
	virtual void nager() override;


};

class Gadwall : public Duck {

public:

	Gadwall(const string& h, int t, int v) : Duck(h, t, v) {}

	virtual void battreDesAiles() override;
	virtual void nager() override;


};


class WoodDuck : public Duck {

public:

	WoodDuck(const string& h, int t, int v) : Duck(h, t, v) {}

	virtual void battreDesAiles() override;
	virtual void nager() override;

};
