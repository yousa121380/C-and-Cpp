/*文件名：main
 *作  用：主要用于当前程序的设计
 */
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<stack>
#include"Sales_data.h"
using std::cout; using std::endl;
using std::cin;
using std::string;
using std::vector;
int main()
{
	string str="1243";
	std::stack<char, string> stk;
	auto end = str.cend();
	while (end != str.cbegin())
	{
		--end;
		stk.push(*end);
	}
	cout << *end;
	return 0;
}