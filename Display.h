#pragma once
#include <vector>
#include <string>
class MainDisplay
{
public:
	int page{ 0 };

	void menu();
	std::vector<std::string> const login();
};