#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <functional>
#include <algorithm>

using namespace std;

class car {
	string model;
	string yearOfManufacture;
	string engineCapacity;
	double price;
public:
	car(): model(" "), yearOfManufacture(" "), engineCapacity(" "), price(0.0) {}
	car(string model, string yearOfManufacture, string engineCapacity, double price) {
		this->model = model;
		this->yearOfManufacture = yearOfManufacture;
		this->engineCapacity = engineCapacity;
		this->price = price;
	}
	void set() {
		cout << "Enter car's model: " << endl; cin >> model;
		cout << "Enter car's year of manufacture: " << endl; cin >> yearOfManufacture;
		cout << "Enter car's engine capacity: " << endl; cin >> engineCapacity;
		cout << "Enter car's price: " << endl; cin >> price;
	}
	void setModel() {
		cout << "Enter model: " << endl; cin >> model;
	}
	void setYearOfManufacture() {
		cout << "Enter year of manufacture: " << endl; cin >> yearOfManufacture;
	}
	void setEngineCapacity() {
		cout << "Enter engine capacity: " << endl; cin >> engineCapacity;
	}
	void setPrice() {
		cout << "Enter price: " << endl; cin >> price;
	}
	string getModel() { return model; }
	string getYearOfManufacture() { return yearOfManufacture; }
	string getEngineCapacity() { return engineCapacity; }
	double getPrice() { return price; }
	void print()const {
		cout << "Model: " << model << endl;
		cout << "Year of manufacture: " << yearOfManufacture << endl;
		cout << "Engine capacity: " << engineCapacity << endl;
		cout << "Price: " << price << endl;
	}
	~car() {}
};
int main() {


	return 0;
}
