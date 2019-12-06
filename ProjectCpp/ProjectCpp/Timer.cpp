#include"Timer.h"


Timer::Timer(int yearnum, int monthnum, int daynum, int hournum, int minutenum, int secondnum) :
	year(yearnum), month(monthnum), day(daynum), hour(hournum), minute(minutenum), second(secondnum)
{
	fixTime(*this);
}

Timer::Timer():Timer(0, 0, 0, 0, 0, 0){}

void Timer::showtime()
{
	std::cout << "当前时间为：" << year << "年" << month << 
		"月" << day << "日" << hour << "时" << minute << "分" << second << "秒" << std::endl;
}

void Timer::getsecond()
{
}

void Timer::getminute()
{
}

void Timer::gethour()
{
}

void Timer::getday()
{
	std::cout << "当前时间为：" << day << "日" << std::endl;
}

void Timer::getmonth()
{
	std::cout << "当前时间为：" << month << "月" << std::endl;
}

void Timer::getyear()
{
	std::cout << "当前时间为：" << year << "年" << std::endl;
}

int getMonthDay(int year, int month)
{
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) return 31;
	if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
	if (month == 2)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			return 29;
		}
		else return 28;
	}
	return 0;
}

void fixTime(Timer& time)
{
	//秒，分钟是0~59，小时是0~23，所以直接用取整即可
	if (time.second >= 60)
	{
		time.minute += time.second / 60;
		time.second = time.second % 60;
	}
	if (time.minute >= 60)
	{
		time.hour += time.minute / 60;
		time.minute = time.minute % 60;
	}
	if (time.hour >= 24)
	{
		time.day += time.hour / 24;
		time.hour = time.hour % 24;
	}
	//天数是1~31，月份是1~12，所以需要使用while循环
	while (time.month > 12)
	{
		time.month = time.month - 12;
		++time.year;
	}
	while (time.day > getMonthDay(time.year, time.month))
	{
		time.day = time.day - getMonthDay(time.year, time.month);
		++time.month;
	}
}
