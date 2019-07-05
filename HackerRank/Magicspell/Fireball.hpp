#pragma once
#pragma once
#include "Spell.hpp"
#include <iostream>
using namespace std;
class Fireball : public Spell {
private: int power;
public:
	Fireball(int power) : power(power) { }
	void revealFirepower() {
		cout << "Fireball: " << power << endl;
	}
};

