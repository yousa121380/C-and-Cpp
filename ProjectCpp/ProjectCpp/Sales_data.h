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
	//���캯��
	Sales_data(std::string s, unsigned cnt, double price) :
		bookNo(s), units_sold(cnt), revenue(cnt*price) {}

	Sales_data() = default;

	//ί�й��캯��
	Sales_data(std::string s) :Sales_data(s, 0, 0) {}

	Sales_data(std::istream &is) :
		Sales_data() {read(is,*this);}

	

	//�������캯��
	Sales_data(const Sales_data &item);

	//������ֵ�����
	Sales_data& operator=(const Sales_data &rhs);

	//��������
	~Sales_data() {}

	std::string isbn() const { return bookNo; }  //1.����������Ա���� 2.��ʽ���� �൱��this->bookNo
	Sales_data& combine(const Sales_data &rhs);
	double avg_price() const;
private:
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
std::istream &read(std::istream &is, Sales_data &item);
std::ostream &print(std::ostream &os, const Sales_data &item);
#endif // !SALES_DATA_H

