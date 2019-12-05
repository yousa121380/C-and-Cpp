#pragma once
#ifndef WINDOW_MGR_H
#define WINDOW_MGR_H

#include <vector>
#include "Screen.h"
class Window_mgr
{
public:

private:
	std::vector<Screen> screens{ Screen(24,80,' ') };
};


#endif // !WINDOW_MGR_H
