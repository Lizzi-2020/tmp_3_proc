
#include "outtransport.h"
#include "ratiofun.h"
void outtransport(transport* data, std::ofstream &ofst) {
	key k = data->k;
	switch (data->k)
	{
	case key::BUS:
		Out(data->b, ofst);
		ofst << ", PowerEngine = " << data->powerEngine << ", Fuel Consumption = " << data->fuelConsumption << ", Ratio = " << ratio(data) << std::endl;
		break;
	case key::TRUCK:
		Out(data->t, ofst);
		ofst << ", PowerEngine = " << data->powerEngine << ", Fuel Consumption = " << data->fuelConsumption << ", Ratio = " << ratio(data) << std::endl;
		break;
	case key::CAR:
		Out(data->c, ofst);
		ofst << ", PowerEngine = " << data->powerEngine << ", Fuel Consumption = " << data->fuelConsumption << ", Ratio = " << ratio(data) << std::endl;
		break;
	default:
		ofst << "Incorrect figure!" << std::endl;
	}
}