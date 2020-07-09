#pragma once

#include <iostream>;

namespace Common
{
	void KeepConsoleWindowOpen() {
		std::cout << "Press any key to close window..";

		char ch;
		std::cin >> std::noskipws >> ch;
	}
}