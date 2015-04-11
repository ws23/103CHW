#ifndef _BOMB_H_
#define _BOMB_H_

#include "player.h"
#include "map.h"

/* Define the menu option */
#define HELP 1
#define STAFF 2
#define PVE 3
#define PVP 4
#define EXIT 0

/* the whole game */

class Bomb{
	private: 
		Map map; // the map which is used
		Player player1, player2;
		 
	public: 
		Bomb(); 
		~Bomb(); 
		int menu(); 
		void help(); 
		void pve(); 
		void pvp(); 
}; 

#endif
