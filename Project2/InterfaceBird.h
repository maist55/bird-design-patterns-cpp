#pragma once

class Bird {

public:
	virtual void chanter() = 0;
	virtual void battreDesAiles() = 0;
	virtual ~Bird() = default;
};