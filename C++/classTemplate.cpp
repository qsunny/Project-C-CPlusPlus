#include <iostream>

using namespace std;

//定义类模板
template <class typeNum>
class compare {
	public:compare(typeNum a,typeNum b){
		x=a;
		y=b;
	}

	typeNum max() {
		return (x>y)?x:y;
	}

	typeNum min() {
		return (x<y)?x:y;
	}

	private:
	typeNum x,y;
};

int main() {
	compare<int> cmp1(3,7);
	cout<<"最大数:"<<cmp1.max()<<endl;
	cout<<"最小数:"<<cmp1.min()<<endl;
	compare<float> cmp2(10.2,12.5);
	cout<<"最大数:"<<cmp2.max()<<endl;
	cout<<"最小数:"<<cmp2.min()<<endl;
}
