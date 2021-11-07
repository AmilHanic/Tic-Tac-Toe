#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	char p1, p2, p3, p4, p5, p6, p7, p8, p9;
	p1 = '1', p2 = '2', p3 = '3', p4 = '4', p5 = '5', p6 = '6', p7 = '7', p8 = '8', p9 = '9';
	int entry = 0; // The following shows the starting board as to display which field corresponds to which number
	cout << "-------------\n";
	cout << "| " << p1 << " | " << p2 << " | " << p3 << " |\n";
	cout << "-------------\n";
	cout << "| " << p4 << " | " << p5 << " | " << p6 << " | \n";
	cout << "-------------\n";
	cout << "| " << p7 << " | " << p8 << " | " << p9 << " | \n";
	cout << "-------------\n";
	cout << "WARNING! An invalid entry means you surrender your move, valid entries are numbers 1 through 9" << endl; // its not a bug its a feature - Todd Howard circa 2011 ( AKA when skyrim came out )
	while (true)
	{
		
		
		cout << "Player X enter the number of the field you want to take : ";
		cin >> entry; // Player 1(X) enters the fields number and that field in the grid is replaced by X
		switch (entry) {
		case 1: p1 = 'X'; break;
		case 2: p2 = 'X'; break;
		case 3: p3 = 'X'; break;
		case 4: p4 = 'X'; break;
		case 5: p5 = 'X'; break;
		case 6: p6 = 'X'; break;
		case 7: p7 = 'X'; break;
		case 8: p8 = 'X'; break;
		case 9: p9 = 'X'; break;
		default:cout << "Invalid entry\n"; // If the entry is invalid the players turn is skipped and the game carries on
			cin.clear();
			break;
		}
		cout << "-------------\n";
		cout << "| " << p1 << " | " << p2 << " | " << p3 << " |\n";
		cout << "-------------\n";
		cout << "| " << p4 << " | " << p5 << " | " << p6 << " | \n";
		cout << "-------------\n";
		cout << "| " << p7 << " | " << p8 << " | " << p9 << " | \n";
		cout << "-------------\n";
		cin.get();
		// Checks if Player 1(X) has won
		if (p1 == 'X' && p2 == 'X' && p3 == 'X') {
			cout << "Player X wins";
			return 0;
		}
		else if (p4 == 'X' && p5 == 'X' && p6 == 'X') {
			cout << "Player X wins";
			return 0;
		}
		else if (p7 == 'X' && p8 == 'X' && p9 == 'X') {
			cout << "Player X wins";
			return 0;
		}
		else if (p1 == 'X' && p4 == 'X' && p7 == 'X') {
			cout << "Player X wins";
			return 0;
		}
		else if (p2 == 'X' && p5 == 'X' && p8 == 'X') {
			cout << "Player X wins";
			return 0;
		}
		else if (p3 == 'X' && p6 == 'X' && p9 == 'X') {
			cout << "Player X wins";
			return 0;
		}
		else if (p1 == 'X' && p5 == 'X' && p9 == 'X') {
			cout << "Player X wins";
			return 0;
		}
		else if (p3 == 'X' && p5 == 'X' && p7 == 'X') {
			cout << "Player X wins";
			return 0;
		}

		cout << "Player O enter the number of the field you want to take : ";
		cin >> entry; // Player 2(O) enters the fields number and that field in the grid is replaced by O
		switch (entry) {
		case 1: p1 = 'O'; break;
		case 2: p2 = 'O'; break;
		case 3: p3 = 'O'; break;
		case 4: p4 = 'O'; break;
		case 5: p5 = 'O'; break;
		case 6: p6 = 'O'; break;
		case 7: p7 = 'O'; break;
		case 8: p8 = 'O'; break;
		case 9: p9 = 'O'; break;
		default:cout << "Invalid entry\n"; // If the entry is invalid the players turn is skipped and the game carries on
			cin.clear();
			break;
		}

		cout << "-------------\n";
		cout << "| " << p1 << " | " << p2 << " | " << p3 << " |\n";
		cout << "-------------\n";
		cout << "| " << p4 << " | " << p5 << " | " << p6 << " | \n";
		cout << "-------------\n";
		cout << "| " << p7 << " | " << p8 << " | " << p9 << " | \n";
		cout << "-------------\n";
		cin.get();
		// Checks if player O has won
		if (p1 == 'O' && p2 == 'O' && p3 == 'O') {
			cout << "Player O wins";
			return 0;
		}
		else if (p4 == 'O' && p5 == 'O' && p6 == 'O') {
			cout << "Player O wins";
			return 0;
		}
		else if (p7 == 'O' && p8 == 'O' && p9 == 'O') {
			cout << "Player O wins";
			return 0;
		}
		else if (p1 == 'O' && p4 == 'O' && p7 == 'O') {
			cout << "Player O wins";
			return 0;
		}
		else if (p2 == 'O' && p5 == 'O' && p8 == 'O') {
			cout << "Player O wins";
			return 0;
		}
		else if (p3 == 'O' && p6 == 'O' && p9 == 'O') {
			cout << "Player O wins";
			return 0;
		}
		else if (p1 == 'O' && p5 == 'O' && p9 == 'O') {
			cout << "Player O wins";
			return 0;
		}
		else if (p3 == 'O' && p5 == 'O' && p7 == 'O') {
			cout << "Player O wins";
			return 0;
		}
	}
}
