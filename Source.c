#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NOW_ARNGINGS

double GPAcalc(int grade1, int grade2, int grade3);

int main () {

int grade1 = 1;
int grade2 = 2;
int grade3 = 3;

double avg = GPAcalc(1, 2, 3);

printf("Average is %.2f\n",avg);


getchar();
return 0;
}

double GPAcalc(int grade1, int grade2, int grade3) {
	double avg;
	avg = (grade1+grade2+grade3)/3;
	return avg;
}