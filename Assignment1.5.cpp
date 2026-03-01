//============================================================================
// Name        : 5.cpp
// Author      : Kiran
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void doubleIt(int n) {
    n = n * 2;
printf("Inside doubleIt: %d\n", n);
}
int main() {
int num = 7;
    doubleIt(num);
    printf("In main after call:%p \n", &num);
return 0;
}
