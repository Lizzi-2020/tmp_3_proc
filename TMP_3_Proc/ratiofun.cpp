#include "ratiofun.h"
#include "ratiotruck.h"
#include "ratiobus.h"

double ratio(transport *s)
{
	switch (s->k) {
	case key::BUS:
		return ratio(s->b, s);
	case key::TRUCK:
		return ratio(s->t, s);
	case key::CAR:
		return ratio(s->t, s);
	default:
		return -1;
	}
}