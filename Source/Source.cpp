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
	string color;
	double price;
public:
	car(): model(" "), yearOfManufacture(" "), engineCapacity(" "), color(" "),  price(0.0) {}
	car(string model, string yearOfManufacture, string engineCapacity, string color, double price) {
		this->model = model;
		this->yearOfManufacture = yearOfManufacture;
		this->engineCapacity = engineCapacity;
		this->color = color;
		this->price = price;
	}
	void set() {
		cout << "Enter car's model: " << endl; cin >> model;
		cout << "Enter car's year of manufacture: " << endl; cin >> yearOfManufacture;
		cout << "Enter car's engine capacity: " << endl; cin >> engineCapacity;
		cout << "Enter car's color: " << endl; cin >> color;
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
	void setColor() {
		cout << "Enter color: " << endl; cin >> color;
	}
	string getModel() { return model; }
	string getYearOfManufacture() { return yearOfManufacture; }
	string getEngineCapacity() { return engineCapacity; }
	string getColor() { return color; }
	double getPrice() { return price; }
	void print()const {
		cout << "Model: " << model << endl;
		cout << "Year of manufacture: " << yearOfManufacture << endl;
		cout << "Engine capacity: " << engineCapacity << endl;
		cout << "Price: " << price << endl;
	}
	~car() {}
};
//BOOL_FUNCTIONS
bool _CompareByModel(car _CAR1, car _CAR2) {
	return _CAR1.getModel() > _CAR2.getModel();
}
bool _CompareByYearOfManufacture(car _CAR1, car _CAR2) {
	return _CAR1.getYearOfManufacture() > _CAR2.getYearOfManufacture();
}
bool _CompareByEngineCapacity(car _CAR1, car _CAR2) {
	return _CAR1.getEngineCapacity() > _CAR2.getEngineCapacity();
}
bool _CompareByPrice(car _CAR1, car _CAR2) {
	return _CAR1.getPrice() > _CAR2.getPrice();
}
//CLASS_CARSHOWROOM
class CarShowroom {
	list<car> _CARS;
public:
	CarShowroom(list<car> _CARS) {
		this->_CARS = _CARS;
	}
	void addNewCar(car _Car) {
		_CARS.push_back(_Car);
	}
	void clearList() {
		_CARS.clear();
	}
	void deleteByModel(string model) {
		list<car>::iterator it = _CARS.begin();
		for (; it != _CARS.end(); it++) {
			if (it->getModel() == model) {
				_CARS.erase(it);
			}
		}
	}
	void deleteByColor(string color) {
		list<car>::iterator it = _CARS.begin();
		for (; it != _CARS.end(); it++) {
			if (it->getColor() == color) {
				_CARS.erase(it);
			}
		}
	}
	void sortByModel() {
		_CARS.sort(_CompareByModel);
	}
	void sortByYearOfManufacture() {
		_CARS.sort(_CompareByYearOfManufacture);
	}
	void sortByEngineCapacity() {
		_CARS.sort(_CompareByEngineCapacity);
	}
	void sortByPrice() {
		_CARS.sort(_CompareByPrice);
	}
	void searchByModel(string model) {
		list<car> ::iterator it = _CARS.begin();
		for (; it != _CARS.end(); it++) {
			if (it->getModel() == model) {
				cout << "\n\n" << string(100, '-') << "\n";
				cout << "Yes, car with such model is found!" << endl;
				it->print();
				cout << "\n\n" << string(100, '-') << "\n";
			}
			else {
				cout << "NOT FOUND" << endl;
				break;
			}
		}
	}
	void searchByYearOfManufacture(string yearOfManufacture) {
		list<car> ::iterator it = _CARS.begin();
		for (; it != _CARS.end(); it++) {
			if (it->getYearOfManufacture() == yearOfManufacture) {
				cout << "\n\n" << string(100, '-') << "\n";
				cout << "Yes, car with such model is found!" << endl;
				it->print();
				cout << "\n\n" << string(100, '-') << "\n";
			}
			else {
				cout << "NOT FOUND" << endl;
				break;
			}
		}
	}
	void searchByEngineCapacity(string engineCapacity) {
		list<car> ::iterator it = _CARS.begin();
		for (; it != _CARS.end(); it++) {
			if (it->getEngineCapacity() == engineCapacity) {
				cout << "\n\n" << string(100, '-') << "\n";
				cout << "Yes, car with such model is found!" << endl;
				it->print();
				cout << "\n\n" << string(100, '-') << "\n";
			}
			else {
				cout << "NOT FOUND" << endl;
				break;
			}
		}
	}
	void searchByColor(string color) {
		list<car> ::iterator it = _CARS.begin();
		for (; it != _CARS.end(); it++) {
			if (it->getColor() == color) {
				cout << "\n\n" << string(100, '-') << "\n";
				cout << "Yes, car with such model is found!" << endl;
				it->print();
				cout << "\n\n" << string(100, '-') << "\n";
			}
			else {
				cout << "NOT FOUND" << endl;
				break;
			}
		}
	}
	void searchByPrice(double price) {
		list<car> ::iterator it = _CARS.begin();
		for (; it != _CARS.end(); it++) {
			if (it->getPrice() == price) {
				cout << "\n\n" << string(100, '-') << "\n";
				cout << "Yes, car with such model is found!" << endl;
				it->print();
				cout << "\n\n" << string(100, '-') << "\n";
			}
			else {
				cout << "NOT FOUND" << endl;
				break;
			}
		}
	}

	void print() {
		cout << "List of cars: " << endl;
		list<car>::iterator it = _CARS.begin();
		for (; it != _CARS.end(); it++) {
			cout << "Model: " << it->getModel() << endl;
			cout << "Year of Manufacture: " << it->getYearOfManufacture() << endl;
			cout << "Engine capacity: " << it->getEngineCapacity() << endl;
			cout << "Color: " << it->getColor() << endl;
			cout << "Price: " << it->getPrice() << "$" << endl;
		}
	}
	
};

int main() {
	

	return 0;
}
