#include <stdio.h>

void guessnumber(int guess){
	if (guess == 555){
		printf("you guessed the number correctly\n");
	}
	if (guess > 555){
		printf("your guess is too high\n");
	}
	if (guess < 555){
		printf("your guess is too low\n");
	}

}

int main(){
	guessnumber(500);
    guessnumber(600);
    guessnumber(555);
}
	
