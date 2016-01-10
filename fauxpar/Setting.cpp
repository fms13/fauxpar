/**
 * \file FSetting.cpp
 *
 * \date Dec 22, 2015
 * \author Frank M. Schubert
 * \copyright BSD License
 */

#include "Setting.h"

using namespace std;

namespace FauxPar {

Setting::Setting(std::string _name) :
		name(_name) {
}

Setting::~Setting() {
}

std::ostream& operator<<(std::ostream& os, const Setting& setting) {
	os << setting.print();

	return os;
}

} /* namespace FauxPar */
