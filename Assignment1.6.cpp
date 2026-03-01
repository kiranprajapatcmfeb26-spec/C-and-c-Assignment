//============================================================================
// Name        : 6.cpp
// Author      : Kiran
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int x=10;
	int y=20;
	int z=30;

	int *px=&x;
	int *py=&y;
	int *pz=&z;

	 cout<<"Three integer:"<<endl;
	 cout << "Before Values: x=" << *px << ", y=" << *py << ", z=" << *pz<< endl;

        //Before Swap values
	    int swap = *px;
	    *px = *py;
	    *py = *pz ;
	    *pz= swap;

	    //  After swap
	    cout << "After Values: x=" << *px << ", y=" << *py << ", z=" << *pz << endl;


	    return 0;
	}
