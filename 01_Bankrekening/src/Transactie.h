#pragma once

#include <string>

using namespace std;

class transactie
{
public:
	transactie(float amount);
	float getAmount() const;

private:
	float amount;

};

