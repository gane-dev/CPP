#pragma once
#include <iostream>
#include <string>
#include "Spell.hpp"
using namespace std;

class Waterbolt : public Spell {
private: int power;
public:
	Waterbolt(int power) : power(power) { }
	void revealWaterpower() {
		cout << "Waterbolt: " << power << endl;
	}
};

