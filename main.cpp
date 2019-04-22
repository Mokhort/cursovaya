#include <iostream>
#include <string>
#include <conio.h>
#include "Periphery.h"

#define READ_PRINTER   1
#define READ_SCANER    2
#define READ_MFU       3
#define READ_PLANSHET  4
#define WRITE_PRINTER  5
#define WRITE_SCANER   6
#define WRITE_MFU      7
#define WRITE_PLANSHET 8
#define EXIT           '0'

using namespace std;
int main() {
	int n,exit=0;
	char c;
	string str;

	while (!exit) {
		cout << "Read device - r" << endl;
		cout << "Add device - a" << endl;
		cout << "Please, press the option:" << endl;
		cin >> c;
		switch (c) {
		case 'r':
			cout << "Read printer - " << READ_PRINTER << endl;
			cout << "Read scaner - " << READ_SCANER << endl;
			cout << "Read mfu - " << READ_MFU << endl;
			cout << "Read planshet - " << READ_PLANSHET << endl;
			cout << "Please, press the option:" << endl;
			cin >> n;
			switch (n) {
			case READ_PRINTER:
				Peryphery::getInstance()->readPrinter();
				break;
			case READ_SCANER:
				Peryphery::getInstance()->readScaner();
				break;
			case READ_MFU:
				Peryphery::getInstance()->readMFU();
				break;
			case READ_PLANSHET:
				Peryphery::getInstance()->readPlanshet();
				break;
			}

			break;
		case 'a':
			cout << "Write printer - " << WRITE_PRINTER << endl;
			cout << "Write scaner - " << WRITE_SCANER << endl;
			cout << "Write mfu - " << WRITE_MFU << endl;
			cout << "Write planshet - " << WRITE_PLANSHET << endl;
			cout << "Please, press the option:" << endl;
			cin >> n;
			switch (n) {
			case WRITE_PRINTER:
				Peryphery::getInstance()->writePrinter();
				break;
			case WRITE_SCANER:
				Peryphery::getInstance()->writeScaner();
				break;
			case WRITE_MFU:
				Peryphery::getInstance()->writeMFU();
				break;
			case WRITE_PLANSHET:
				Peryphery::getInstance()->writePlanshet();
				break;
			}
			break;
		
		case EXIT:
			exit = 1;
			cout << "Exiting program" << endl;
			break;
		default:
			cout << "Error! Incorrect menu option" << endl;
		}
	}
	system("pause");
	return 0;
}