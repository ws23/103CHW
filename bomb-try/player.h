#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "character.h"

class Player: public Character{
	private: 
		int x; 
		int y; 
		string name; 

	public: 
		Player() = delete; 
		Player(string); 
		~Player(); 	
		void setExp(int); 
		void setSite(int, int); 
		int getX(); 
		int getY(); 
		string getName();
		void move(int);		// To change the site(x, y)
}; 

#endif
