#include <iostream>
#include <fstream>
using namespace std;

int main(int argc,char* argv[]) {
	fstream iout;
	iout.open("city.text",ios::out);
	iout << "Beijin" << " Shanghai" << " Guangzhou" << " Shenzhen" << "  ";
	iout.close();
	iout.open("city.text",ios::out | ios::app);
	iout << "HongKong" << "  ";
	iout.close();

	char city[30] = {0};
	iout.open("city.text",ios::in);
	while(!iout.eof()) {
		iout >> city;
		cout << city << " \n";
	}

	iout.close();
	
	return 0;
}

