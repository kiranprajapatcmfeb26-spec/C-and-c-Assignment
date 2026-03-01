//============================================================================
// Name        : 7.cpp
// Author      : Kiran
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;
       const float PI=3.1415f;  //global scope

         class Circle{
        	 double radius;

         public:
        	 Circle(float r){     // Parameterised constructor
        	 radius = 7.0;
         }

	double getRadius() const {
		return radius;
	}

	void setRadius(double radius) {
		this->radius = radius;
	}
	//calculate area
	float circleArea(){
		return PI * radius * radius;
	}
	//calculate circumference
	float circlePerimeter(){
		return 2*PI * radius;
	}
};
int main() {
	double r;
	 Circle c(r);


	    cout << "Area of a circle.: " << c.circleArea() << endl;
	    cout << "Circumference: " << c.circlePerimeter() << endl;
	return 0;
}
