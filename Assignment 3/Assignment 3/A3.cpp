#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

//REQ_001: The system shall be capable of determining the victor of a Rock, Paper, Scissors game

int main() {
	return 1;
}

char * RockPaperScissors(char Player1[], char Player2[])
{
	char* result = (char*) malloc(10);
	char result[10] = "";

	if (strcmp(Player1, "Rock") == 0 && strcmp(Player2, "Rock") == 0) {
		strcpy(result, "Draw");
	}
	if (strcmp(Player1, "Rock") == 0 && strcmp(Player2, "Paper") == 0) {
		strcpy(result, "Player2");
	}
	if (strcmp(Player1, "Rock") == 0 && strcmp(Player2, "Scissors") == 0) {
		strcpy(result, "Player1");
	}
	if (strcmp(Player1, "Paper") == 0 && strcmp(Player2, "Rock") == 0) {
		strcpy(result, "Player1");
	}
	if (strcmp(Player1, "Paper") == 0 && strcmp(Player2, "Paper") == 0) {
		strcpy(result, "Draw");
	}
	if (strcmp(Player1, "Paper") == 0 && strcmp(Player2, "Scissors") == 0) {
		strcpy(result, "Player2");
	}
	if (strcmp(Player1, "Scissors") == 0 && strcmp(Player2, "Rock") == 0) {
		strcpy(result, "Player2");
	}
	if (strcmp(Player1, "Scissors") == 0 && strcmp(Player2, "Paper") == 0) {
		strcpy(result, "Player1");
	}
	if (strcmp(Player1, "Scissors") == 0 && strcmp(Player2, "Scissors") == 0) {
		strcpy(result, "Draw");
	}

	return result;
}

