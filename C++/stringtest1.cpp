#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "hello merry chrismes";
	cout << str << endl;
	for(string::iterator it=str.begin();it!=str.end();it++) 
		cout << *it;

	cout << endl;
	string strnum = "20141225";
	string str_hex = "40c3";
	string str_bin = "-10010110001";
	string str_auto = "0x7f";
	string::size_type sz;

	int i_dec = stoi(strnum,&sz);
	int i_hex = stoi(str_hex,&sz,16);
	int i_bin = stoi(str_bin,nullptr,2);
	int i_auto = stoi(str_auto,nullptr,0);
	cout << strnum << ":" << i_dec << "," << sz << endl;
	cout << strnum << ":" << i_hex << "," << sz << endl;
	cout << strnum << ":" << i_bin << "," << sz << endl;
	cout << strnum << ":" << i_auto << "," << sz << endl;

	cout << "str size:  " << str.size() << endl;
	cout << "str lenght: " << str.length() << endl;
	cout << "str lenght: " << str.length() << endl;
	cout << "str max_size: " << str.max_size() << endl;
	cout << "str capacity: " << str.capacity() << endl;
	
	string teststr("I like to code in c plus plus...");
	unsigned tssz = teststr.size();
	teststr.resize(tssz+4,'d');
	cout << "teststr resize: " << teststr << endl;
	cout << "teststr substr: " << teststr.substr(2,4) << endl;
	cout << "teststr find: " << teststr.find("code") << endl;
	
	string appstr1;
	cout << "Please enter any string : " << endl;
	getline(cin,appstr1);
	string appstr2 = "";
	cout << appstr2.append(appstr1) << endl;







	return 0;
}

