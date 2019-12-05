/*文件名：main
 *作  用：主要用于当前程序的设计
 */
#include<iostream>
#include<string>
#include<vector>
#include"Sales_data.h"
#include"Timer.h"
using std::cout; using std::endl;
using std::cin;
using std::string;
using std::vector;

int main()
{
	Timer time1 = Timer(11, 14, 29, 11, 40, 50);
	time1.showtime();
	Timer time2 = Timer(10, 14, 29, 11, 40, 50);
	time2.showtime();
	(time1 - time2).showtime();
	return 0;
}