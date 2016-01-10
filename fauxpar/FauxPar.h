/**
 * \file FauxPar.h
 *
 * \date Dec 22, 2015
 * \author Frank M. Schubert
 * \copyright BSD License
 */

#ifndef FAUXPAR_H_
#define FAUXPAR_H_

#include <map>
#include <string>
#include <iostream>

#include "Setting.h"
#include "ValueFloat.h"

namespace FauxPar {

class FauxPar {
public:
	FauxPar(std::string _name);
	virtual ~FauxPar();

	void insert(Setting* setting);

	friend std::ostream& operator<<(std::ostream& os, const FauxPar& parameters);

private:
	const std::string name;

	std::map<std::string, Setting::ptr> settings;
};

} /* namespace FauxPar */

#endif /* FAUXPAR_H_ */
