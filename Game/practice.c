#include <stdio.h>

int main(){
	char myChar = 'A';
	int myInteger = '9';
	float myFloat = '4';
	char myOtherChar = 97;
	double myDouble = 3;
	long myLong = '0';

	printf("myInteger: %d \n", myInteger);
	printf("myLong: %ld \n", myLong);
	printf("myFloat: %f \n", myDouble);
	printf("myChar: %d \n", myChar);
	printf("myOtherChar: %b \n", myOtherChar);
}
