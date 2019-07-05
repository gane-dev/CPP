#pragma once
//#include "Thunderstorm.hpp"
#include "Waterbolt.hpp"
#include "Fireball.hpp"
#include "Frostbite.hpp"
#include "Spell.hpp"
#include "SpellJournal.hpp"
#include "Thunderstorm.hpp"

class Wizard {
public:
	Spell* cast() {
		Spell* spell;
		string s; cin >> s;
		int power; cin >> power;
		if (s == "fire") {
			spell = new Fireball(power);
		}
		else if (s == "frost") {
			spell = new Frostbite(power);
		}
		else if (s == "water") {
			spell = new Waterbolt(power);
		}
		else if (s == "thunder") {
			spell = new Thunderstorm(power);
		}
		else {
			spell = new Spell(s);
			cin >> SpellJournal::journal;
		}
		return spell;
	}
};

