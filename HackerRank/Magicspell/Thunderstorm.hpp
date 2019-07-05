#pragma once

#include "Spell.hpp"
#include <string>
#include <iostream>

using namespace std;

class Thunderstorm : public Spell {
private:
	int power;
public:
	Thunderstorm(int power) : power(power) { }
	void revealThunderpower() {
		cout << "Thunderstorm: " << power << endl;
	}
};
