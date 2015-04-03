#include <iostream>

class Vector {
 public:
  Vector(); 
  Vector(int, int); 
  ~Vector(); 

  Vector operator + (Vector&);
  Vector operator - (Vector&);
  int operator * (Vector&);
  friend std::ostream& operator << (std::ostream&, Vector&); 

 private:
  int x;
  int y;
};
    
int main () {
  Vector a(1, 2);
  Vector b(3, 4);
  Vector c, d;
  int e;
  c = a + b;
  d = a - b;
  e = a * b;
  std::cout << c << std::endl << d << std::endl << e;
  return 0;
} 

Vector::Vector()
  :x(0), y(0) {}

Vector::Vector(int X, int Y)
  :x(X), y(Y) {}

Vector::~Vector(){}


Vector Vector::operator + (Vector& vec){
	return Vector(this->x + vec.x, this->y + vec.y); 	
}

Vector Vector::operator - (Vector& vec){
	return Vector(this->x - vec.x, this->y - vec.y); 
}

int Vector::operator * (Vector& vec){
	return this->x * vec.x + this->y * vec.y; 
}

std::ostream& operator << (std::ostream& out, Vector& vec){
	out << "(" << vec.x << " " << vec.y << ")" << std::endl;
	return out;  	
}
