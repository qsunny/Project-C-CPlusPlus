#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int ,5> arr = {3,4,5,6,33};
	cout << "array size:" << arr.size()	<< endl;
	for(auto it=arr.begin();it!=arr.end();it++) {
		cout << ' ' << *it;
	}
	cout << endl;
}
