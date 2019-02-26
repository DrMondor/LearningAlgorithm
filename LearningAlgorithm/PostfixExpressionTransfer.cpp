/*-------------------------------------
一次栈的实践
         -简单计算器
--------------------------------------*/


#include "stdafx.h"
#include "PostfixExpressionTransfer.h"
#include <iostream>

using namespace std;

void InputData();

void InputData() {

	int stack[10];
	char signal[5];
	char data[20];
	cout << "请输入算式\n";
	cin.getline(data, 20);

	for (int i = 0; i < 20; i++) {


		if (data[i]<9 && data[i] > 0)
		{
			
		}


	}
	cout << data[3];

	cin >> data;

}