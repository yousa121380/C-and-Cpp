#pragma once
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<string>
#include<iostream>

class Sales_data
{
	friend std::istream &read(std::istream &is, Sales_data &item);
	friend std::ostream &print(std::ostream &os, const Sales_data &item);

public:
	std::string isbn() const { return bookNo; }  //1.声明常量成员函数 2.隐式引用 相当于this->bookNo
	Sales_data& combine(const Sales_data &rhs)
	{
		units_sold += rhs.units_sold;
		revenue += rhs.revenue;
		return *this;
	}

	double avg_price() const
	{
		if (units_sold)
			return revenue / units_sold;
		else
			return 0;
	}
private:
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

std::istream &read(std::istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " "
		<< item.revenue << " " << item.avg_price();
	return os;
}
#endif // !SALES_DATA_H

