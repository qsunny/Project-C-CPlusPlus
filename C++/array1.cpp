#include <iostream>
#include <array>

using namespace std;

int main(int argc,char** argv) {
	
	array<int,10> myarray;
	//assign some values;
	for(int i=0;i<10;i++) myarray.at(i) = i+1;

	//print content;
	cout << "myarray contains:";
	for(int i=0;i<10;i++)
		cout<< ' ' << myarray.at(i);
	cout << '\n';
	return 0;
}
