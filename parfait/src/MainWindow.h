/**
 * \file MainWindow.h
 *
 * \date Jan 04, 2016
 * \author Frank M. Schubert
 * \copyright BSD License
 */

#ifndef MAINWINDOW_H_
#define MAINWINDOW_H_

class MainWindow: public QMainWindow {
	Q_OBJECT

public:
	MainWindow(QString hostname, unsigned int port);
	virtual ~MainWindow();

};

#endif /* MAINWINDOW_H_ */
