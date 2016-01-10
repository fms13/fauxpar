/**
 * \file Value.h
 *
 * \date Dec 22, 2015
 * \author Frank M. Schubert
 * \copyright BSD License
 */

#ifndef VALUE_H_
#define VALUE_H_

#include <string>
#include <limits>
#include <iostream>

#include "Setting.h"

namespace FauxPar {

class ValueFloat: public Setting {
public:
	typedef std::shared_ptr<ValueFloat> ptr;

	ValueFloat(std::string _name, double limit_min =
			-std::numeric_limits<double>::max(), double limit_max =
			std::numeric_limits<double>::max());

	virtual ~ValueFloat();


protected:
	virtual std::string print() const;

	const double limit_min;
	const double limit_max;
};


} /* namespace FauxPar */

#endif /* VALUE_H_ */
