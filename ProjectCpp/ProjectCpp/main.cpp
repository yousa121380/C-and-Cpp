/*�ļ�����main
 *��  �ã���Ҫ���ڵ�ǰ��������
 */
#include<iostream>
#include<string>
#include<vector>
#include"Sales_data.h"
using std::cout; using std::endl;
using std::cin;
using std::string;
using std::vector;

int main()
{
	Sales_data data("21332");
	Sales_data data1 = data;
	cout << data.isbn() << endl;
	return 0;
}