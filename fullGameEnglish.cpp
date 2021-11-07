#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	char p1, p2, p3, p4, p5, p6, p7, p8, p9;
	p1 = '1', p2 = '2', p3 = '3', p4 = '4', p5 = '5', p6 = '6', p7 = '7', p8 = '8', p9 = '9';
	int entry=0;
  // this part shows the starting board as to alert players which field corresponds to which number
	cout << "-------------\n";
	cout << "| " << p1 << " | " << p2 << " | " << p3 << " |\n";
	cout << "-------------\n";
	cout << "| " << p4 << " | " << p5 << " | " << p6 << " | \n";
	cout << "-------------\n";
	cout << "| " << p7 << " | " << p8 << " | " << p9 << " | \n";
	cout << "-------------\n";
	cout << "WARNING! An invalid entry means you surrender your move, only valid entries are numbers 1 through 9"<<endl; // its not a bug its a feature - Todd Howard circa 2011 ( AKA when skyrim came out )
	while(true)
	{	
		// Checks if player O won
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
		// Checks if player X won
		if (p1=='X' && p2=='X' && p3=='X') {
			cout << "Player X wins";
			return 0;
		}
		else if(p4 == 'X' && p5 == 'X' && p6 == 'X'){
			cout << "Player X wins";
			return 0;
		}
		else if(p7 == 'X' && p8 == 'X' && p9 == 'X'){
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
		cout << "Player X enter the field which you want to take : ";
		cin >> entry; // You enter the field which you want to show X 
		switch(entry) {
		case 1: p1 = 'X'; break;
		case 2: p2 = 'X'; break;
		case 3: p3 = 'X'; break;
		case 4: p4 = 'X'; break;
		case 5: p5 = 'X'; break;
		case 6: p6 = 'X'; break;
		case 7: p7 = 'X'; break;
		case 8: p8 = 'X'; break;
		case 9: p9 = 'X'; break;
		default:cout << "Invalid entry"; // If your entry is not valid it writes invalid entry and moves on to the next player
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

		cout << "Player O enter the field which you want to take : ";
		cin >> entry; // You enter the field which you want to show O 
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
		default:cout << "Invalid entry"; //  If your entry is not valid it writes invalid entry and moves on to the next player
			cin.clear(); 
			break;
		} // the following part simply writes out the current state of the game after an entry has been made
		cout << "-------------\n";
		cout << "| " << p1 << " | " << p2 << " | " << p3 << " |\n";
		cout << "-------------\n";
		cout << "| " << p4 << " | " << p5 << " | " << p6 << " | \n";
		cout << "-------------\n";
		cout << "| " << p7 << " | " << p8 << " | " << p9 << " | \n";
		cout << "-------------\n";
		cin.get();
	}
}
