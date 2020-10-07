
#include <iostream>
#include "User.h"
#include "login.cpp"
#include "Display.h"
#include <vector>
#include <string>
int main() {

	MainDisplay display;
	//Display Main menu
	std::vector<std::string> userinfo{ display.login() };
	
	return 0;
};