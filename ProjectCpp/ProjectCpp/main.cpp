/*文件名：main
 *作  用：主要用于当前程序的设计
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