#include "Display.h"
#include <iostream>
#include <vector>
#include <string>
void MainDisplay::menu() { std::cout << "Bienvenu au menu\n"; };

std::vector<std::string> const MainDisplay::login() { 
	std::vector<std::string> userinfo;
	std::cout << "S'il vous plait, identifiez vous\n Username: __________ \t"; 
	std::string username;
	std::getline(std::cin, username);
	userinfo.push_back(username);
	std::cout << "password: _______________ \t";
	std::string password;
	std::getline(std::cin, password);
	userinfo.push_back(password);

	return userinfo;

};