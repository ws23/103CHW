#ifndef _CHARACTER_H_
#define _CHARACTER_H_

#include <string>

/* Define the maximum value of attribute */
#define MAX_SPEED 10
#define MAX_LENGTH 10
#define MAX_AMOUNT 10

/* the character */

class Character {
	private: 
		string name; // the name of the character

	protected: 
		int speed; // the speed of movement
		int length; // the length of water column
		int amount; // the num of water ball 

	public: 
		Character(); 
		Character(string, int, int, int); 
		~Character(); 
		void setCName(string); 
		void setSpeed(int); 
		void setLength(int); 
		void setAmount(int); 
		string getCName(); 
		int getSpeed(); 
		int getLength();
		int getAmount();  
}; 


#endif
