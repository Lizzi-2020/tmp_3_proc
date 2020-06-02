#include "ratiobus.h"
double ratio(bus &b, transport *data)
{
	return (b.size * 75) / data->powerEngine;
}