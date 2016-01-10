/**
 * \file ExampleClass1.h
 *
 * \date Dec 22, 2015
 * \author Frank M. Schubert
 * \copyright BSD License
 */

#ifndef EXAMPLECLASS1_H_
#define EXAMPLECLASS1_H_

#include "FauxPar.h"

class ExampleClass1 {
public:
	ExampleClass1();
	virtual ~ExampleClass1();

	static FauxPar::FauxPar GetFauxPar();
};

#endif /* EXAMPLECLASS1_H_ */
