#include "ofMain.h"
#include "ofApp.h"
#include "bankrekening.h"
#include "Transactie.h"

//========================================================================
int main() {
	ofSetupOpenGL(1024, 768, OF_WINDOW);			// <-------- setup the GL context

													// this kicks off the running of my app
													// can be OF_WINDOW or OF_FULLSCREEN
													// pass in width and height too:
	ofRunApp(new ofApp());

	bankrekening rekening = bankrekening("Moneyz", log[0] = 0.0, 100);

	transactie c1 = transactie(10);
	transactie c2 = transactie(100);
	transactie c3 = transactie(20);

	cout << rekening.getName() << "load=" << rekening.getSaldo() << endl;

	rekening = rekening + c1;

	cout << rekening.getName() << "load=" << rekening.getSaldo() << endl;

	rekening = rekening - c2;

	cout << rekening.getName() << "load=" << rekening.getSaldo() << endl;

}
