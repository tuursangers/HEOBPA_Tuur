#pragma once
#include "Transactie.h"
#include <string>

using namespace std; // of voor elke aanmaak van een string std::string

class bankrekening
{
public:
	bankrekening(string name, float log[1], float saldo = 0);
	virtual ~bankrekening();

	const string& getName() const;
	float getSaldo() const;
	const string& getLog() const ;

	

	bankrekening operator+ (const transactie& transactie) const;
	bankrekening operator- (const transactie& transactie) const;

private:
	string name;
	float saldo;
	string log[1];
};
