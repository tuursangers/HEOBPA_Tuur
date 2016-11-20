#include "Transactie.h"



transactie::transactie(float amount) {
	this->amount = amount;
}

float transactie::getAmount() const {
	return amount;
}


