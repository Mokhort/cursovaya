#pragma once
#include <string>
#include <iostream>
using namespace std;

class Peryphery {
public:
	static Peryphery* getInstance() {
	static Peryphery instance;
	return &instance;
}

private:
	string manufacter;
	int year;
	string color_print;
	int cost;
	string color_device;
	string interface;
	string max_format;
	int speed;
	int space_scan;

	Peryphery() {};
	//~Peryphery();
	/*Peryphery(Peryphery const&) = delete;
	Peryphery& operator= (Peryphery const&) = delete;*/

public:

	void setManufacter(string p);
	string getManufacter();

	void setYear(int p);
	int getYear();

	void setColorPrint(string p);
	string getColorPrint();

	void setCost(int p);
	int getCost();

	void setColorDevice(string p);
	string getColorDevice();

	void setInterface(string p);
	string getInterface();

	void setMaxFormat(string p);
	string getMaxFormat();

	void setSpeed(int p);
	int getSpeed();

	void setSpaceScan(int p);
	int getSpaceScan();

	void readPrinter();
	void readScaner();
	void readMFU();
	void readPlanshet();

	void writePrinter();
	void writeScaner();
	void writeMFU();
	void writePlanshet();
	void forAll(string *man, string *clr, string *inter, int *ye, int *cst);
};