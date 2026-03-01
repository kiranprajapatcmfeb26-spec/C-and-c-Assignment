/*
 ============================================================================
 Name        : 3.c
 Author      : Kiran
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float celsiusToFahrenheit(float c); //function prototype declare
float  fahrenheitToCelsius(float f);
int main() {
	float celsius;
	float fahrenheit;

	printf("Enter tempt. in Celsius:\n");
	scanf("%f",&celsius);
	printf("Enter tempt. in fahrenheit:\n");
		scanf("%f",&fahrenheit);

		//call by the function
		fahrenheit =celsiusToFahrenheit(celsius);
		celsius = fahrenheitToCelsius(fahrenheit);

		//result
		printf("celsiusToFahrenheit %f : \n",fahrenheit);
		printf("fahrenheitToCelsius %f : \n",celsius);
	return 0;
}
   float celsiusToFahrenheit(float c){
	   return (c*1.8+32.0f);
   }
   float fahrenheitToCelsius(float f){
   	   return (f-32.0f*.55);
      }
