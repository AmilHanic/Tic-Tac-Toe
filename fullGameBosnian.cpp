#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	char p1, p2, p3, p4, p5, p6, p7, p8, p9;
	p1 = '1', p2 = '2', p3 = '3', p4 = '4', p5 = '5', p6 = '6', p7 = '7', p8 = '8', p9 = '9';
	int unos = 0;
	cout << "-------------\n";
	cout << "| " << p1 << " | " << p2 << " | " << p3 << " |\n";
	cout << "-------------\n";
	cout << "| " << p4 << " | " << p5 << " | " << p6 << " | \n";
	cout << "-------------\n";
	cout << "| " << p7 << " | " << p8 << " | " << p9 << " | \n";
	cout << "-------------\n";
	cout << "UPOZORENJE! Nepravilnim unosom predajete svoj potez" << endl; // its not a bug its a feature - Todd Howard circa 2011 ( AKA when skyrim came out )
	while (true)
	{
		
		
		cout << "Igrac X unesite polje u koje zelite preuzeti : ";
		cin >> unos; // Unosite polje u koje zelite staviti svoj znak zatim se to polje zamjeni sa vasim znakom (igrac O)
		switch (unos) {
		case 1: p1 = 'X'; break;
		case 2: p2 = 'X'; break;
		case 3: p3 = 'X'; break;
		case 4: p4 = 'X'; break;
		case 5: p5 = 'X'; break;
		case 6: p6 = 'X'; break;
		case 7: p7 = 'X'; break;
		case 8: p8 = 'X'; break;
		case 9: p9 = 'X'; break;
		default:cout << "Nepravilan unos"; // ako unos nije broj izmedju 1 i 9 onda ispisuje nepravilan unos i prelazi na sljedeceg igraca (igrac O)
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
		// Projvera da li je igrac X pobjedio
		if (p1 == 'X' && p2 == 'X' && p3 == 'X') {
			cout << "Pobjeda igraca X";
			return 0;
		}
		else if (p4 == 'X' && p5 == 'X' && p6 == 'X') {
			cout << "Pobjeda igraca X";
			return 0;
		}
		else if (p7 == 'X' && p8 == 'X' && p9 == 'X') {
			cout << "Pobjeda igraca X";
			return 0;
		}
		else if (p1 == 'X' && p4 == 'X' && p7 == 'X') {
			cout << "Pobjeda igraca X";
			return 0;
		}
		else if (p2 == 'X' && p5 == 'X' && p8 == 'X') {
			cout << "Pobjeda igraca X";
			return 0;
		}
		else if (p3 == 'X' && p6 == 'X' && p9 == 'X') {
			cout << "Pobjeda igraca X";
			return 0;
		}
		else if (p1 == 'X' && p5 == 'X' && p9 == 'X') {
			cout << "Pobjeda igraca X";
			return 0;
		}
		else if (p3 == 'X' && p5 == 'X' && p7 == 'X') {
			cout << "Pobjeda igraca X";
			return 0;
		}

		cout << "Igrac O unesite polje u koje zelite preuzeti : ";
		cin >> unos; // Unosite polje u koje zelite staviti svoj znak zatim se to polje zamjeni sa vasim znakom (igrac O)
		switch (unos) {
		case 1: p1 = 'O'; break;
		case 2: p2 = 'O'; break;
		case 3: p3 = 'O'; break;
		case 4: p4 = 'O'; break;
		case 5: p5 = 'O'; break;
		case 6: p6 = 'O'; break;
		case 7: p7 = 'O'; break;
		case 8: p8 = 'O'; break;
		case 9: p9 = 'O'; break;
		default:cout << "Nepravilan unos"; // ako unos nije broj izmedju 1 i 9 onda ispisuje nepravilan unos i prelazi na sljedeceg igraca (igrac O)
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
		// Provjera da li je igrac O pobijedio
		if (p1 == 'O' && p2 == 'O' && p3 == 'O') {
			cout << "Pobjeda igraca Oks";
			return 0;
		}
		else if (p4 == 'O' && p5 == 'O' && p6 == 'O') {
			cout << "Pobjeda igraca Oks";
			return 0;
		}
		else if (p7 == 'O' && p8 == 'O' && p9 == 'O') {
			cout << "Pobjeda igraca Oks";
			return 0;
		}
		else if (p1 == 'O' && p4 == 'O' && p7 == 'O') {
			cout << "Pobjeda igraca Oks";
			return 0;
		}
		else if (p2 == 'O' && p5 == 'O' && p8 == 'O') {
			cout << "Pobjeda igraca Oks";
			return 0;
		}
		else if (p3 == 'O' && p6 == 'O' && p9 == 'O') {
			cout << "Pobjeda igraca Oks";
			return 0;
		}
		else if (p1 == 'O' && p5 == 'O' && p9 == 'O') {
			cout << "Pobjeda igraca Oks";
			return 0;
		}
		else if (p3 == 'O' && p5 == 'O' && p7 == 'O') {
			cout << "Pobjeda igraca Oks";
			return 0;
		}
	}
}
