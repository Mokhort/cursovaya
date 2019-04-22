#include <iostream>
#include <string>
#include "Periphery.h"
#include <fstream>
using namespace std;

void Peryphery::setManufacter(string p) {
	manufacter = p;
}
string Peryphery::getManufacter() {
	return manufacter;
}

void  Peryphery::setYear(int p) {
	year = p;
}
int  Peryphery::getYear() {
	return year;
}

void Peryphery::setColorPrint(string p) {
	color_print = p;
}
string Peryphery::getColorPrint() {
	return color_print;
}

void Peryphery::setCost(int p) {
	cost = p;
}
int Peryphery::getCost() {
	return cost;
}

void Peryphery::setColorDevice(string p) {
	color_device = p;
}
string Peryphery::getColorDevice() {
	return color_device;
}
//interface
void Peryphery::setInterface(string p) {
	interface = p;
}
string Peryphery::getInterface() {
	return interface;
}

void Peryphery::setMaxFormat(string p) {
	max_format = p;
}
string Peryphery::getMaxFormat() {
	return max_format;
}

void Peryphery::setSpeed(int p) {
	speed = p;
}
int Peryphery::getSpeed() {
	return speed;
}

void Peryphery::setSpaceScan(int p) {
	space_scan = p;
}
int Peryphery::getSpaceScan() {
	return space_scan;
}

void Peryphery::forAll(string *man, string *clr, string *inter,int *ye, int *cst) {

	cout << "Write the manufacter of device:";
	cin >> *man;
	Peryphery::getInstance()->setManufacter(*man);
	Peryphery::getInstance()->getManufacter();
	cout << "Write the year of release for device:";
	cin >> *ye;
	Peryphery::getInstance()->setYear(*ye);
	Peryphery::getInstance()->getYear();
	cout << "Write the cost of device:";
	cin >> *cst;
	Peryphery::getInstance()->setCost(*cst);
	Peryphery::getInstance()->getCost();
	cout << "Write the color of device:";
	cin >> *clr;
	Peryphery::getInstance()->setColorDevice(*clr);
	Peryphery::getInstance()->getColorDevice();
	cout << "Write the interface of device:";
	cin >> *inter;
	Peryphery::getInstance()->setInterface(*inter);
	Peryphery::getInstance()->getInterface();
}

void Peryphery::readPrinter() {
	string str;
	ifstream fin_printer("C:/Users/gisel/source/repos/Kursach_tp_6sem/printer.txt");
	if (fin_printer.eof()) cout << "No created devices!" << endl;
	else {
		while (getline(fin_printer, str)) {
			cout << str << endl;
		}
	}
	fin_printer.close();
}
void Peryphery::readScaner() {
	string str;
	ifstream fin_scaner("C:/Users/gisel/source/repos/Kursach_tp_6sem/scaner.txt");
	if (fin_scaner.eof()) cout << "No created devices!" << endl;
	else {
		while (getline(fin_scaner, str)) {
			cout << str << endl;
		}
	}
	fin_scaner.close();
}
void Peryphery::readMFU(){
	string str;
	ifstream fin_mfu("C:/Users/gisel/source/repos/Kursach_tp_6sem/mfu.txt");
	if (fin_mfu.eof()) cout << "No created devices!" << endl;
	else {
		while (getline(fin_mfu, str)) {
			cout << str << endl;
		}
	}
	fin_mfu.close();
}
void Peryphery::readPlanshet() {
	string str;
	ifstream fin_planshet("C:/Users/gisel/source/repos/Kursach_tp_6sem/planshet.txt");
	if (fin_planshet.eof()) cout << "No created devices!" << endl;
	else {
		while (getline(fin_planshet, str)) {
			cout << str << endl;
		}
	}
	fin_planshet.close();
}

void Peryphery::writePrinter() {
	string man, clr_pr, max, clr, inter;
	//char clr, inter;
	int ye, cst,sp;
	Peryphery::forAll(&man, &clr, &inter, &ye, &cst);

	cout << "Write the color of print:";
	cin >>clr_pr ;
	Peryphery::getInstance()->setColorPrint(clr_pr);
	Peryphery::getInstance()->getColorPrint();
	cout << "Write the max format:";
	cin >> max;
	Peryphery::getInstance()->setMaxFormat(max);
	Peryphery::getInstance()->getMaxFormat();
	cout << "Write the speed of print:";
	cin >> sp;
	Peryphery::getInstance()->setSpeed(sp);
	Peryphery::getInstance()->getSpeed();

	ofstream fout_printer;
	try {
		fout_printer.open("C:/Users/gisel/source/repos/Kursach_tp_6sem/printer.txt", std::ios::app);
		}

	catch (...) {
		cout << "Error of openning file" << endl;
	}
	fout_printer << " Manufacter of device: " <<man;
	fout_printer << " Year of release: " << ye;
	fout_printer << " Cost of device: " << cst;
	fout_printer << " Color of device: " << clr;
	fout_printer << " Interface: " << inter;

	fout_printer << " Color of print: " << clr_pr;
	fout_printer << " Max format: " << max;
	fout_printer << " Speed of print: " << sp << endl;
	//cout << " the cost of device:" << cst <<endl;
	fout_printer.close();
}
void Peryphery::writeScaner() {
	string man, clr, inter,max;
	//char clr, inter
	int ye, cst,area;
	Peryphery::forAll(&man, &clr, &inter, &ye, &cst);

	cout << "Write the max format:";
	cin >> max;
	Peryphery::getInstance()->setMaxFormat(max);
	Peryphery::getInstance()->getMaxFormat();
	cout << "Write the square area of scan:";
	cin >> area;
	Peryphery::getInstance()->setSpaceScan(area);
	Peryphery::getInstance()->getSpaceScan();

	ofstream fout_scaner;
		try {
			fout_scaner.open("C:/Users/gisel/source/repos/Kursach_tp_6sem/scaner.txt", std::ios::app);
		}
		catch (...) {
		cout << "Error of openning file" << endl;
		}

	fout_scaner << " Manufacter of device: " << man;
	fout_scaner << " Year of release: " << ye;
	fout_scaner << " Cost of device: " << cst;
	fout_scaner << " Color of device: " << clr;
	fout_scaner << " Interface: " << inter;

	fout_scaner << " Max format: " << max;
	fout_scaner << " Square area of scan: " << area << endl;;
	fout_scaner.close();
}
void Peryphery::writeMFU() {
	string man, clr, clr_pr, inter, max;
	//char clr, clr_pr, inter, max;
	int ye, cst, sp,area;
	Peryphery::forAll(&man, &clr, &inter, &ye, &cst);

	cout << "Write the color of print:" << endl;
	cin >> clr_pr;
	Peryphery::getInstance()->setColorPrint(clr_pr);
	Peryphery::getInstance()->getColorPrint();
	cout << "Write the max format:";
	cin >> max;
	Peryphery::getInstance()->setMaxFormat(max);
	Peryphery::getInstance()->getMaxFormat();
	cout << "Write the speed of print:";
	cin >> sp;
	Peryphery::getInstance()->setSpeed(sp);
	Peryphery::getInstance()->getSpeed();
	cout << "Write the square area of scan:";
	cin >> area;
	Peryphery::getInstance()->setSpaceScan(area);
	Peryphery::getInstance()->getSpaceScan();
		ofstream fout_mfu;
		try{
			fout_mfu.open("C:/Users/gisel/source/repos/Kursach_tp_6sem/mfu.txt", std::ios::app);
	}
	catch (...) {
		cout << "Error of openning file" << endl;
	}

	fout_mfu << " Manufacter of device: " << man;
	fout_mfu << " Year of release: " << ye;
	fout_mfu << " Cost of device: " << cst;
	fout_mfu << " Color of device: " << clr;
	fout_mfu << " Interface: " << inter;

	fout_mfu << " Color of print: " << clr_pr;
	fout_mfu << " Max format: " << max;
	fout_mfu << " Speed of print: " << sp;
	fout_mfu << " Square area of scan: " << area << endl;;
	fout_mfu.close();
}
void Peryphery::writePlanshet() {
	string man, clr, inter, max;
	//char clr, inter;
	int ye, cst;
	Peryphery::forAll(&man, &clr, &inter, &ye, &cst);

	cout << "Write the max format:";
	cin >> max;
	Peryphery::getInstance()->setMaxFormat(max);
	Peryphery::getInstance()->getMaxFormat();

	ofstream fout_planshet;
		try{
			fout_planshet.open("C:/Users/gisel/source/repos/Kursach_tp_6sem/planshet.txt", std::ios::app);
		}
		catch (...) {
			cout << "Error of openning file" << endl;
		}
	fout_planshet << " Manufacter of device: " << man;
	fout_planshet << " Year of release: " << ye;
	fout_planshet << " Cost of device: " << cst;
	fout_planshet << " Color of device: " << clr;
	fout_planshet << " Interface: " << inter;

	fout_planshet << " Max format: " << max << endl;;

	fout_planshet.close();
}