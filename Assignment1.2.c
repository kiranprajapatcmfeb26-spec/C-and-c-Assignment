/*
 ============================================================================
 Name        : 2.c
 Author      : Kiran
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//Datatype size

	printf("Size of short int: %d \n",sizeof(short int));
	printf("Size of int : %d \n",sizeof(int));
	printf("Size of long int : %d \n",sizeof(long int));
	printf("Size of long long : %d \n",sizeof(long long));
	printf("Size of long long int : %d \n",sizeof(long long int));
	printf("Size of unsigned int : %d \n",sizeof(unsigned int));
	printf("Size of float : %d \n",sizeof(float));
	printf("Size of double : %d \n",sizeof(double));
	printf("Size of long double : %d \n",sizeof(long double));
	printf("Size of char : %d \n",sizeof(char));

	 //Size of int , long int ,unsigned, float have 4 bytes
	// Size of long long, long long int, double have 8 bytes
	return 0;
}
