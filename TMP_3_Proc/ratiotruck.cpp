#include "ratiotruck.h"
double ratio(truck &t, transport *data)
{
	return t.power / data->powerEngine;
}