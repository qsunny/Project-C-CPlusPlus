#include <iostream>
#include <string>
using namespace std;

class person {
	string name;
	int age;

	public :
	person() : age(25){}; 
	void setName(string name){
		this->name = name;
	}
	void display(){
		cout<<"name is " << this->name <<endl;
		cout<<"age is " << this->age <<endl;
	}
};

int main() {
	person p;
	p.setName("Jack");
	p.display();
	return 0;
}
