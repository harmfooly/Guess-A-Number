#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

// Algorithm is posted in README.

int main(){
	// Establish variables
	char userName[20];
	int turns = 0;
	int guess = -999;
	int game = true;

	// Generate Random Number
	srand(time(NULL));
	int correctNumber = (rand() % 100) + 1;

	//  Ask the user for name
	printf("Hello Enter your first name: ");
	scanf("%s", userName);

	printf("Welcome, %s, We're going to play a game.", userName);
	
	while (game){
		  // Ask the user for number
		turns++; // Increment turn counter upon correct guess
		printf(" (Turn %d), Enter an integer between 1-100: ", turns);
		scanf("%d", &guess);

		if (guess > correctNumber){
			printf("Too high! Try again.");
		} else if (guess < correctNumber){
			 printf("Too low! Try again."); // Provide feedback
		} else {
       			printf("Correct! it took you %d turns to get the number correct!", turns);
			game = false;
					
	} // Stop when value matches, provide message with number of turns.
} // end of while loop
	return 0;
} // end of main
