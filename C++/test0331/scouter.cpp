#include "scouter.h"

void Scouter::PredictFusionPowerLevel(Character& character_left, Character& character_right)
{
	Character fusion_character(character_left + character_right);
	Display(fusion_character);
};

Scouter::Scouter(){}

Scouter::~Scouter(){}
