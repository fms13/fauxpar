/**
 * \file main.cpp
 *
 * \date Jan 04, 2016
 * \author Frank M. Schubert
 * \copyright BSD License
 */

#include "src/MainWindow.h"

using namespace std;

int main(int argc, char *argv[]) {

	QApplication app(argc, argv);

	MainWindow main_window();

	app.exec();

	return 0;
}
/** @} */
