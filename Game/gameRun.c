#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
	// Establish variables
	char userName[20];
	int turns = 0;
	int guess = -999;
	int gameRun  = true;

	// Generate Random Number
	int correctNumber = (rand() % 100) + 1;

	//  Ask the user for name
	printf("Hello Enter your first name: ");
	scanf("%s", userName);

	printf("Welcome, %s, We're going to play a game.", userName);
	
	while (gameRun){
		  // Ask the user for number
		turns++;
		printf("Enter an integer between 1-100: ");
		scanf("%d", &guess);

		if (guess > correctNumber){
			printf("Too high! Try again.");
		} else if (guess < correctNumber){
			 printf("Too low! Try again.");
		} else {
       			printf("Correct! it took you %d turns to get the number correct!", &turns);			
	}
	

}
