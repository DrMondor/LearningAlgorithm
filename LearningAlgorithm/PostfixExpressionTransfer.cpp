#include "stdafx.h"
#include "PostfixExpressionTransfer.h"
#include <iostream>

using namespace std;

void InputData();

void InputData() {

	char data[10];
	cout << "��������ʽ" << endl;
	cin >> data;
	cin.getline(data);
	cout << data;
	cin >> data;

}