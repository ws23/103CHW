#include <iostream>

class Character
{
public:
	Character() = delete;
	Character(unsigned int, unsigned int);
	~Character();

	Character operator+(Character&);
	friend std::ostream& operator<<(std::ostream&, Character&); 
	unsigned int GetPowerLevel() {return PowerLevel;}

private:
	unsigned int PowerLevel; // = HP + Ki
	unsigned int HP;
	unsigned int Ki;
};
