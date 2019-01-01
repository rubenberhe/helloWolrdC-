#include "pch.h"
#include <iostream>
#include <vector>
#include <chrono>
#include <thread>

int main()
{
	std::cout << "Hello World!\n";

	const int MAX_PAUSE = 5000;

	std::vector<int> vettore = { 1,2,3,4,5,6,7,8,9 };
	for (const auto& numb : vettore) {
		std::cout << "Hello World from iteration: " << numb << std::endl;

		// stop the current thread for X ms
		std::this_thread::sleep_for(std::chrono::milliseconds(MAX_PAUSE));
	}

}
