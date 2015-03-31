#include "character.h"

class Character;
class Scouter {
public:
	Scouter();
	~Scouter();
	void KnowHisPowerLevel(Character& character) { Display(character); };
	void PredictFusionPowerLevel(Character& character_left, Character& character_right) ; 
private:
	void Display(Character& character) { std::cout << character << std::endl; };
};
