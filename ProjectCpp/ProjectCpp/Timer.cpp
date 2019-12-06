#include"Timer.h"


Timer::Timer(int yearnum, int monthnum, int daynum, int hournum, int minutenum, int secondnum) :
	year(yearnum), month(monthnum), day(daynum), hour(hournum), minute(minutenum), second(secondnum)
{
	fixTime(*this);
}

Timer::Timer():Timer(0, 0, 0, 0, 0, 0){}

void Timer::showtime()
{
	std::cout << "��ǰʱ��Ϊ��" << year << "��" << month << 
		"��" << day << "��" << hour << "ʱ" << minute << "��" << second << "��" << std::endl;
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
	std::cout << "��ǰʱ��Ϊ��" << day << "��" << std::endl;
}

void Timer::getmonth()
{
	std::cout << "��ǰʱ��Ϊ��" << month << "��" << std::endl;
}

void Timer::getyear()
{
	std::cout << "��ǰʱ��Ϊ��" << year << "��" << std::endl;
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
	//�룬������0~59��Сʱ��0~23������ֱ����ȡ������
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
	//������1~31���·���1~12��������Ҫʹ��whileѭ��
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
