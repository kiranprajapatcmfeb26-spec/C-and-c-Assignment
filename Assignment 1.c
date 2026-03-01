/*
 ============================================================================
 Name        : Assignment.c
 Author      : Kiran
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float a1, a2, a3, a4, a5;
	        printf("Enter the marks in 5 subjects: %d \n");
			scanf("%f %f %f %f %f", &a1, &a2, &a3, &a4, &a5);

			float total= a1+a2+a3+a4+a5;
			float per=total/5;

			char grade=(per>=75?'A':(per>=60?'B':(per>=45?'C':'F')));

			printf("Marks in 5 subjects are: \n");

			printf("a1: %f\n",a1);
			printf("a2: %f\n",a2);
			printf("a3: %f\n",a3);
			printf("a4: %f\n",a4);
			printf("a5: %f\n",a5);

			printf("Total Marks: %f\n",total);
			printf("Percentage: %f\n",per);
			printf("Grade: %c\n",grade);

	return 0;

	}

