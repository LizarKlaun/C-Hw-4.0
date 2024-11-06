#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	int randNumber = rand() % 101;
	cout << randNumber << endl;
	int value;
	int i = 0;
	do {
		i++;
		cout << "Enter your value: " << endl;
		cin >> value;
		if (value == randNumber) {
			cout << "You win!!! " << endl;
			break;
		}
		else {
			cout << "Error" << endl;
			break;
		}
		cout << "You used " << i << " attempt out of 3" << endl;
	} while (i < 3);
}
