
#include "carout.h"
void Out(car &c, std::ofstream &ofst) {
	ofst << "It is CAR: Max Speed = " << c.maxSpeed;
}