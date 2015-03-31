#include "character.h"

Character::Character(unsigned int ki, unsigned int hp)
	:HP(hp), Ki(ki), PowerLevel(hp+ki) {}

Character::~Character(){}

Character Character::operator+(Character& arg){
	return Character(this->HP * arg.HP, this->Ki * arg.Ki);  	
}

std::ostream& operator<<(std::ostream& out, Character& arg){
	if(arg.PowerLevel>=9000)
		out << "It's over 9000!!!" << std::endl; 
	out << "His Power level is " << arg.PowerLevel << "!" << std::endl; 
	return out; 
}
