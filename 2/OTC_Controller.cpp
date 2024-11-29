#include "OTC_Controller.h"

void OTC_Controller::chek_details(Conveyor conveyor, Garbage garbage, Storage storage)
{
	for (size_t i = 0; i < conveyor.num_of_brake_disc(); i++) {
		if (conveyor.get_brake_disc(i).get_info_about_detail_status()) {
			garbage.add_brake_disc_to_garbage(conveyor.get_brake_disc(i));
			conveyor.remove_brake_disc_from_conveyor(i);
		}
	}

	for (size_t i = 0; i < conveyor.num_of_car_glass(); i++) {
		if (conveyor.get_car_glass(i).get_info_about_detail_status()) {
			garbage.add_car_glass_to_garbage(conveyor.get_car_glass(i));
			conveyor.remove_car_glass_from_conveyor(i);
		}
	}

	for (size_t i = 0; i < conveyor.num_of_spark_plugs(); i++) {
		if (conveyor.get_spark_plugs(i).get_info_about_detail_status()) {
			garbage.add_spark_plugs_to_garbage(conveyor.get_spark_plugs(i));
			conveyor.remove_spark_plugs_from_conveyor(i);
		}
	}
	conveyor.transport_to_storage(storage);
	std::cout << "Details checked";
}
