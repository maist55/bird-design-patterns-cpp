#include "InterfaceBird.h"
#pragma once

class FlyingBird : public Bird {

	virtual void voler() = 0;
	virtual void choregraphieDanse() = 0;

};