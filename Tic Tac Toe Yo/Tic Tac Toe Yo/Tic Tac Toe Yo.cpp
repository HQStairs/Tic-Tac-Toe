// Tic Tac Toe Yo.cpp : Defines the entry point for the console application.
//For 'Clearing' Console: std::cout << string( 100, '\n' );

#include "stdafx.h" //Only VS2015
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std; //Only using stdlib, no reason not to use namespace
 
//Start Board Spaces
char first_square = ' ';
char second_square = ' ';
char third_square = ' ';
char fourth_square = ' ';
char fifth_square = ' ';
char sixth_square = ' ';
char seventh_square = ' '; 
char eighth_square = ' ';
char ninth_square = ' '; 
//End Board Spaces

//Start Variables
string again = " ";
//End Variables

/*
Formatted like this:
-------------------
| 1st | 2nd | 3rd |
-------------------
| 4th | 5th | 6th |
-------------------
| 7th | 8th | 9th |
-------------------
*/

//Start Display Board
void display_board() { 
	cout << "-------------\n";
	cout << "| " << first_square << " | " << second_square << " | " << third_square << " |\n";
	cout << "-------------\n";
	cout << "| " << fourth_square << " | " << fifth_square << " | " << sixth_square << " |\n";
	cout << "-------------\n";
	cout << "| " << seventh_square << " | " << eighth_square << " | " << ninth_square << " |\n";
	cout << "-------------\n";
}
//End Display Board

//Start Play the Game
void play_game() {
	char x_o = ' ';
	int input_square = 0;
	int turn_number = 0;
	while (true) {
		++turn_number;
		//Check Turn Number
		if (turn_number % 2 == 0) {
			x_o = 'O';
		}
		if (turn_number % 2 != 0) {
			x_o = 'X';
		}
		//Start Tie Game
		if (turn_number > 9) {
			cout << "The game is a tie! How surprising.\n";
			break;
		}
		//End Tie Game
		//Check Turn Number
		while (true) {
			cout << "Turn number " << turn_number << ", It is Player " << x_o << "'s turn.\n";
			cout << "Please enter square number: ";
			cin >> input_square;
			if (input_square > 0 && input_square < 10) { break; }
			else { cout << "Invalid Input, retry.\n"; }
		}
		//Row 1
		if (input_square == 1 && first_square == ' ') { first_square = x_o; }
		else if (input_square == 2 && second_square == ' ') { second_square = x_o; }
		else if (input_square == 3 && third_square == ' ') { third_square = x_o; }
		//Row 1

		//Row 2
		else if (input_square == 4 && fourth_square == ' ') { fourth_square = x_o; }
		else if (input_square == 5 && fifth_square == ' ') { fifth_square = x_o; }
		else if (input_square == 6 && sixth_square == ' ') { sixth_square = x_o; }
		//Row 2

		//Row 3
		else if (input_square == 7 && seventh_square == ' ') { seventh_square = x_o; }
		else if (input_square == 8 && eighth_square == ' ') { eighth_square = x_o; }
		else if (input_square == 9 && ninth_square == ' ') { ninth_square = x_o; }
		else { cout << "Square is taken! Try Again!\n"; --turn_number; }
		//Row 3

		display_board();

		//Start Vertical X Wins
		if (first_square == 'X' && fourth_square == 'X' && seventh_square == 'X') {
			cout << "Player 1 Wins!\n";
			break;
		}
		if (second_square == 'X' && fifth_square == 'X' && eighth_square == 'X') {
			cout << "Player 1 Wins!\n";
			break;
		}
		if (third_square == 'X' && sixth_square == 'X' && ninth_square == 'X') {
			cout << "Player 1 Wins!\n";
			break;
		}
		//End Vertical X Wins

		//Start Horizontal X Wins
		if (first_square == 'X' && second_square == 'X' && third_square == 'X') {
			cout << "Player 1 Wins!\n";
			break;
		}
		if (fourth_square == 'X' && fifth_square == 'X' && sixth_square == 'X') {
			cout << "Player 1 Wins!\n";
			break;
		}
		if (seventh_square == 'X' && eighth_square == 'X' && ninth_square == 'X') {
			cout << "Player 1 Wins!\n";
			break;
		}
		//End Horizontal X Wins

		//Start Diagonal X Wins
		if (first_square == 'X' && fifth_square == 'X' && ninth_square == 'X') {
			cout << "Player 1 Wins!\n";
			break;
		}
		if (third_square == 'X' && fifth_square == 'X' && seventh_square == 'X') {
			cout << "Player 1 Wins!\n";
			break;
		}
		//End Diagonal X Wins

		//Start Vertical O Wins
		if (first_square == 'O' && fourth_square == 'O' && seventh_square == 'O') {
			cout << "Player 2 Wins!\n";
			break;
		}
		if (second_square == 'O' && fifth_square == 'O' && eighth_square == 'O') {
			cout << "Player 2 Wins!\n";
			break;
		}
		if (third_square == 'O' && sixth_square == 'O' && ninth_square == 'O') {
			cout << "Player 2 Wins!\n";
			break;
		}
		//End Vertical O Wins

		//Start Horizontal O Wins
		if (first_square == 'O' && second_square == 'O' && third_square == 'O') {
			cout << "Player 2 Wins!\n";
			break;
		}
		if (fourth_square == 'O' && fifth_square == 'O' && sixth_square == 'O') {
			cout << "Player 2 Wins!\n";
			break;
		}
		if (seventh_square == 'O' && eighth_square == 'O' && ninth_square == 'O') {
			cout << "Player 2 Wins!\n";
			break;
		}
		//End Horizontal O Wins

		//Start Diagonal O Wins
		if (first_square == 'O' && fifth_square == 'O' && ninth_square == 'O') {
			cout << "Player 2 Wins!\n";
			break;
		}
		if (third_square == 'O' && fifth_square == 'O' && seventh_square == 'O') {
			cout << "Player 2 Wins!\n";
			break;
		}
		//End Diagonal O Wins
	}

}
//End Play the Game

int main(){
	while (true) {
		first_square = ' ';
		second_square = ' ';
		third_square = ' ';
		fourth_square = ' ';
		fifth_square = ' ';
		sixth_square = ' ';
		seventh_square = ' ';
		eighth_square = ' ';
		ninth_square = ' ';
		cout << "Welcome to the game and stuff. Try not to have too much fun.\n";
		cout << "Player 1(X) will go first, Player 2(O) will go second.\n";
		display_board();
		play_game();
		while (true) {
			cout << "Would you like to play again?(yes, or no): ";
			cin >> again;
			if (again == "yes" || again == "no") { break; }	
			else { cout << "Invalid input, retry\n"; }
		}
		if (again == "no") { break; }
	}

    return 0;
}

