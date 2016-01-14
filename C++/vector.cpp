#include <iostream>
#include <vector>

using namespace std;

int main(int argc,char** argv) {
	vector<int> vec1; //创建一个空vector
	vector<int> vec2(vec1); //复制vec1;
	vector<int> vec3(10);
	vector<int> vec4(10,1);

	int arr[5]={1,2,3,4,5};
	vector<int> vec5(arr,&arr[5]);
	for(vector<int>::iterator it = vec5.begin();it!=vec5.end();++it) {
		cout << ' ' << *it;
	}

	cout << '\n';
	return 0;
}
