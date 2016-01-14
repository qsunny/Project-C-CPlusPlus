#include <iostream>
#include <string>
using namespace std;

/*Abstract base class*/
struct Coffee {
	virtual double getCost() = 0;
	virtual string getIngredients() = 0;
	virtual ~Coffee() = 0;
};

inline Coffee::~Coffee(){}

/*SimpleCoffee class */
struct SimpleCoffee : public Coffee {
	virtual double getCost() {
		return 1.0;
	}
	
	virtual string getIngredients() {
		return "Coffee";
	}

};

/*Decorators */
// Decorator Milk that adds milk to coffee
struct MilkDecorator : Coffee {
	private : 
		Coffee* basicCoffee;
	public : 
	MilkDecorator(Coffee *basicCoffee) : basicCoffee(basicCoffee){}
	
	virtual  double getCost() {
		return basicCoffee -> getCost() + 0.5;
	}

	virtual string getIngredients() {
		return basicCoffee -> getIngredients() + "," + "Milk";
	}

};

//Decorator Whip that adds whip to coffee
struct WhipDecorator : Coffee {
	private : 
		Coffee* basicCoffee;
	public : 
	WhipDecorator (Coffee *basicCoffee) 
		: basicCoffee(basicCoffee) {}

	virtual double getCost() {
		return basicCoffee->getCost() + 0.7;
	}

	virtual string getIngredients() {
		return basicCoffee->getIngredients() + "," + "Whip";
	}

};


int main() {
	SimpleCoffee s;
	cout << "Cost: " << s.getCost() << "; Ingredients: " << s.getIngredients() << endl;

	MilkDecorator m(&s);
	cout << "Cost: " << m.getCost() << "; Ingredients: " << m.getIngredients() << endl;

	WhipDecorator w(&s);
	cout << "Cost: " << w.getCost() << "; Ingredients: " << w.getIngredients() << endl;

	MilkDecorator m2(&w);
	cout << "Cost: " << m2.getCost() << "; Ingredients: " << m2.getIngredients() << endl;
	

	return 0;
}

