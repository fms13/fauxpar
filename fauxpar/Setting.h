/**
 * \file FSetting.h
 *
 * \date Dec 22, 2015
 * \author Frank M. Schubert
 * \copyright BSD License
 */

#ifndef SETTING_H_
#define SETTING_H_

#include <memory>
#include <string>
#include <iostream>

namespace FauxPar {

class Setting {
public:
	typedef std::shared_ptr<Setting> ptr;

	Setting(std::string _name);
	virtual ~Setting();

	std::string get_name() const {
		return name;
	}

	friend std::ostream& operator<<(std::ostream& os, const Setting& setting);

protected:
	virtual std::string print() const = 0;

	std::string name;

};

} /* namespace FauxPar */

#endif /* SETTING_H_ */
