#include <iostream>
#include "bomb.h"
using namespace std; 

int main(){
	Bomb game; 
	do{
		int opt = game.menu(); 
		switch(opt){
			case HELP:	
				game.help(); 	
				break; 
			case STAFF: 
				game.staff(); 
				break;
			case PVE:
				game.pve(); 
				break;
			case PVP:
				game.pvp(); 
				break;
			case EXIT;
				return 0; 
			default: 
				return 1; 
		}	
	}while(1); 
}
