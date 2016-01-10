/**
 * \file Value.cpp
 *
 * \date Dec 22, 2015
 * \author Frank M. Schubert
 * \copyright BSD License
 */

#include "ValueFloat.h"

#include <sstream>

using namespace std;

namespace FauxPar {

ValueFloat::ValueFloat(std::string _name, double _limit_min, double _limit_max) :
		Setting(_name), limit_min(_limit_min), limit_max(_limit_max) {

	if (limit_max < limit_min) {
		stringstream ss;
		ss << "Setting for Float '" << name << "': upper limit is smaller than lower limit.";
		throw runtime_error(ss.str());
	}
}

ValueFloat::~ValueFloat() {
}

std::string ValueFloat::print() const {
	stringstream ss;

	ss << "Setting '" << name << "': Type float, lower limit: ";

	if (limit_min == -std::numeric_limits<double>::max())
		 ss << "unlimited";
	else
		ss << limit_min;

	ss << ", upper limit: ";

	if (limit_max == std::numeric_limits<double>::max())
		 ss << "unlimited";
	else
		ss << limit_max;


	ss << ".";

	return ss.str();
}

} /* namespace FauxPar */
