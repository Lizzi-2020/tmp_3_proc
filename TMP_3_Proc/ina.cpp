#include "ina.h"
#include "busin.h"
#include "truckin.h"
#include "carin.h"

transport* Ina(std::ifstream &ifst) {
	transport *sp;
	int k;
	ifst >> k;
	switch (k) {
	case 1:
		sp = new transport;
		sp->k = key::BUS;
		In(sp->b, ifst);
		ifst >> sp->powerEngine;
		ifst >> sp->fuelConsumption;
		return sp;
	case 2:
		sp = new transport;
		sp->k = key::TRUCK;
		In(sp->t, ifst);
		ifst >> sp->powerEngine;
		ifst >> sp->fuelConsumption;
		return sp;
	case 3:
		sp = new transport;
		sp->k = key::CAR;
		In(sp->c, ifst);
		ifst >> sp->powerEngine;
		ifst >> sp->fuelConsumption;
		return sp;
	default:
		return 0;
	}


}