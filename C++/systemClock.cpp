#include <iostream>
#include <ctime>
#include <ratio>
#include <chrono>
using namespace std;

int main(int argc,char** agrv) {
		
	chrono::system_clock;

	std::chrono::duration<int,ratio<60*60*24>> one_day;
	system_clock::time_point today = system_clock::now();
	system_clock::time_point tomorrow = today + one_day;

	
	
}

