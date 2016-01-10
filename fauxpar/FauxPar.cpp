/**
 * \file FauxPar.cpp
 *
 * \date Dec 22, 2015
 * \author Frank M. Schubert
 * \copyright BSD License
 */

#include "FauxPar.h"

using namespace std;

namespace FauxPar {

FauxPar::FauxPar(std::string _name) :
		name(_name) {
}

FauxPar::~FauxPar() {
}

void FauxPar::insert(Setting *setting) {
	settings.insert(make_pair(setting->get_name(), Setting::ptr(setting)));
}

std::ostream& operator<<(std::ostream& os, const FauxPar& parameters) {
	string plural_s = "";
	if (parameters.settings.size() != 0 and parameters.settings.size() > 1)
		plural_s = "s";

	os << "Parameter class " << parameters.name << " has " << parameters.settings.size()
			<< " setting" << plural_s << ": " << endl;

	for (auto setting : parameters.settings) {
		os << *setting.second << endl;
	}

	return os;
}

} /* namespace FauxPar */
