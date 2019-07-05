#include "Magicspell/Fireball.hpp"
#include "Magicspell/Frostbite.hpp"
#include "Magicspell/Spell.hpp"
#include "Magicspell/SpellJournal.hpp"
#include "Magicspell/Fireball.hpp"
#include "Magicspell/Wizard.hpp"
#include "Magicspell/Thunderstorm.hpp"
#include <iostream>
using namespace std;


void counterspell(Spell* spell) {

	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

}
int main() {
//	string SpellJournal::journal = "";
	int T;
	cin >> T;
	Wizard Arawn;
	while (T--) {
		Spell* spell = Arawn.cast();
		counterspell(spell);
	}
	return 0;
}