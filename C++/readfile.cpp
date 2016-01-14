#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	try {
		string line;
		ifstream myfile("example");
		if(myfile.is_open()) {
			while(getline(myfile,line)) {
				cout <<line << "\n";
			}
			myfile.close();
		} else {
			cout << "Unable to open file" << endl;
		}
		} catch(exception &e) {
			cout << e.what() << endl;
		}
		return 0;
}
