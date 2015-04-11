#ifndef _MAP_H_
#define _MAP_H_

#define MAP_WIDTH 30
#define MAP_HEIGHT 30

class Map{
	private: 
		int field[HEIGHT][WIDTH]; 

	public: 
		Map(string);	// To open the map file, argv is the file name
		~Map(); 
		void setState(int, int);	// Update the field's state, argv are x, y
		int getState(int, int); 	// Return the field's state, argv are x, y
}

#endif
