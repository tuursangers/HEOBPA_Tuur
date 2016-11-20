#include "bankrekening.h"



bankrekening::bankrekening(string name, float log[1], float saldo) {
	this->name = name;
	this->log[1] = log[1];
	this->saldo = saldo;
}

bankrekening::~bankrekening() {
}

bankrekening bankrekening::operator+(const transactie& transactie) const {
	return bankrekening(name, log[1], saldo + transactie.getAmount() );
}

bankrekening bankrekening::operator-(const transactie& transactie) const {
	return bankrekening(name, log[1], saldo - transactie.getAmount());
}

const string& bankrekening::getName() const {
	return name;
}

float bankrekening::getSaldo() const {
	return saldo;
}

const string& bankrekening::getLog() const {
	return log[1];
}
