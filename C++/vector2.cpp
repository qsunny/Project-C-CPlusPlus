#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main(int argc,char** argv) {
	
	vector<std::string> lists;
	lists.push_back("item1");
	lists.push_back("item2");
	lists.push_back("item3");
	// 写入
	std::ofstream output_file("lists.txt");
	std::ostream_iterator<std::string> output_iterator(output_file, "\n");
	std::copy(lists.begin(), lists.end(), output_iterator);
	
	vector<std::string> lists2;
	std::ifstream file("lists.txt");
	// 读取
	while (file) {
		std::string line;
		std::getline(file, line);
		cout<<line<<"\n";
		lists2.push_back(line);
	}  
	
	return 0;
}

