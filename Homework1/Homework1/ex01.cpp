#include <iostream>
#include <string>
using namespace std;


void ex02();
void ex03();
void ex04();
int doubler(int);
int sum(int x, int y);
int addOne(int &x);
void ex05();
void readArray(int x[], int size);
bool findValue(int x[], int size, int guess);

int main() {
	ex05();
}

void ex02() {
	//a
	bool hasPassedTest = true;

	//b
	int x, y;
	x = rand();
	y = rand();
	if (x >= y) {
		cout << "x is greater than or equal to y" << endl;
	}
	else {
		cout << "x is less than y" << endl;
	}

	//c
	int numberOfShares;
	cout << "Please enter a number of shares" << endl;
	cin >> numberOfShares;
	if (numberOfShares < 100) {
		cout << "The number of shares is less than 100" << endl;
	}
	else {
		cout << "The number of shares is more than 100" << endl;
	}

	//d
	int book, box;
	cout << "Please provide a box width and book width" << endl;
	cout << "Box width: ";
	cin >> box;
	cout << endl << "Book width: ";
	cin >> book;
	cout << endl;
	if (box % book == 0 || book % box == 0) {
		cout << "The box width is evenly divisible by the book width" << endl;
	}
	else {
		cout << "The box width is not evenly divisible by the book width" << endl;
	}

	//e
	int shelfLife, outsideTemp;
	cout << "Please enter the shelf life of a box of chocolate: ";
	cin >> shelfLife;
	cout << endl << "Please enter the outside temperature: ";
	cin >> outsideTemp;
	if (outsideTemp > 90) {
		shelfLife = shelfLife - 4;
	}
	cout << "The shelf life is " << shelfLife;
}

void ex03() {
	
	//a
	int areaOfSquare;
	cout << "Please enter the area of some square: ";
	cin >> areaOfSquare;
	cout << "The diagonal is: " << sqrt(2 * areaOfSquare) << endl;
	
	//b
	char response;
	cout << "Please respond y/n" << endl;
	cin >> response;
	if (response == 'y'){
		cout << "yes" << endl;
	}
	else if (response == 'n') {
		cout << "no" << endl;
	}
	
	//c
	char tab = '	';

	//d
	std::string mailingAdress;
	cout << "Please provide a mailing adress: " << endl;
	cin.ignore(); //I added this becasue the program was skipping over getting any input
	std::getline(cin, mailingAdress);
	cout << mailingAdress << endl;

	//e
	std::string empty = "";
}

void ex04() {
	//a
	int input = 0;
	cout << "Please provide a number between 1 and 10." << endl;
	while (input == 0) {
		cin >> input;
		if (input < 1 || input > 10) {
			cout << "Please provide a valid input" << endl;
			input = 0;
		}
	}
	cout << input << endl;

	//b
	cout << "Each sum of cubes from 1 to " << input << " is: " << endl;
	int answer = 0;
	for (int i=1; i <= input; i++) {
		answer = answer + (i*i*i);
			cout << answer << endl;
	}
	cout << "The sum of all cubes from 1 to " << input << " is: " << answer << endl;

	//c
	int i = 0;
	do {
		cout << "*";
		i++;
	} while (i < input);
	cout << endl;

	//d
	for (int i = 0; i <= 40; i = i + 2) {
		cout << i << endl;
	}

	//e
	cout << doubler(input) << endl;

	//f
	int a, b;
	a = rand();
	b = rand();
	cout << sum(a, b) << endl;

	//g
	cout << addOne(input) << endl;

}

int doubler(int x) {
	return 2 * x;
}

int sum(int x, int y) {
	return x + y;
}

int addOne(int &x) {
	return x + 1;
}

void ex05() {
	//a
	cout << "Please provide 5 numbers." << endl;
	int response[5];
	for (int i = 0; i < 5; i++) {
		cin >> response[i];
	}

	//b
	int sum = 0;
	int product = 1;
	for (int i = 0; i < 5; i++) {
		sum = sum + response[i];
		product = product * response[i];
	}
	cout << "Sum: " << sum << endl << "Product: " << product << endl;

	//c
	readArray(response, 5);

	//d
	int guess;
	cout << "What value would you like to check?" << endl;
	cin >> guess;
	if (findValue(response, 5, guess)) {
		cout << "That value is in the array." << endl;
	}
	else {
		cout << "That value is not in the array." << endl;
	}
}

void readArray(int x[], int size) {
	for (int i = 0; i < size; i++) {
		cout << x[i] << endl;
	}
}

bool findValue(int x[], int size, int guess) {
	for (int i = 0; i < size; i++) {
		if (x[i] == guess) {
			return true;
		}
	}
	return false;
}