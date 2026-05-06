#pragma once
#include "InterfaceBird.h"

class NonFlyingBird : public Bird {

	virtual void nager() = 0;
	virtual void courir() = 0;
};