#include <iostream>
using namespace std;

void findMinMax(int a, int b, int c, int &minVal, int &maxVal){

	//Initialize minval and maxVal with the first number
	 minVal =a;   //assume first number is largest
	 maxVal=a;
    //compare with second number
	if(b<minVal){
		minVal=b;
	}else if(b>maxVal){
		maxVal=b;
	}else if(c<minVal){
		minVal=c;
	}else if(c>maxVal){
		maxVal=c;
	}
}

int main() {
	int x,y,z;
	int lo , hi;

	cout<<"Enter first number:";
	cin>>x;
	cout<<"Enter second number:";
	cin>>y;
	cout<<"Enter third number:";
	cin>>z;

	//call the function and store the result
    findMinMax(x,y,z, lo, hi);

    cout<<"Minimum value :"<<lo<<endl;
    cout<<"Maximum value :"<<hi<<endl;

    cout << "lo = " << lo << ", hi = " << hi << endl;
	return 0;
}
