#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream myfile;
	myfile.open("example");
	for(int i=0;i<10;i++) 
	myfile << "Writing this to a file.\n";
	myfile.close();
	return 0;
}
