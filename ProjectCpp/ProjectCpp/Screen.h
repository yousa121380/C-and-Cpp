#pragma once
#ifndef SCREEN_H
#define SCREEN_H

#include<string>
class Screen
{
public:
	typedef std::string::size_type pos;
	Screen() = default;
	Screen(pos ht, pos wd, char c) :
		height(ht), width(wd), contents(ht*wd, c) {}
	char get() const { return contents[cursor]; }
	char get(pos ht, pos wd)const;
	Screen &move(pos r, pos c);
	Screen &set(char c);
	Screen &set(pos r, pos c, char ch);

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
};
inline Screen &Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}
inline char Screen::get(pos r, pos c) const
{
	pos row = r * width;
	return contents[row + c];
}
inline Screen &Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}
inline Screen &Screen::set(pos r, pos c, char ch)
{
	contents[r*width + c] = ch;
	return *this;

}
#endif // !SCREEN_H