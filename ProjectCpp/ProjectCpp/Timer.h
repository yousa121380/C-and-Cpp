#pragma once
#ifndef TIMER
#define TIMER

#include<iostream>
#include<string>


#define STANDARD_YEAR_NUM 2000   //两位年计数的分割线

#include<iostream>
class Timer
{
	friend Timer operator+(const Timer, const Timer);
	friend Timer operator-(const Timer, const Timer);
	friend void fixTime(Timer& time);
public:
	
	Timer(int yearnum, int monthnum, int daynum, int hournum, int minutenum, int secondnum);
	Timer();
	void showtime();
	void getsecond();
	void getminute();
	void gethour();
	void getday();
	void getmonth();
	void getyear();
private:
	int year, month, day, hour, minute, second;
};
Timer operator+(const Timer a, const Timer b);
Timer operator-(const Timer a, const Timer b);
int getMonthDay(int year, int month);
void fixTime(Timer& time);



#endif // !TIMER
