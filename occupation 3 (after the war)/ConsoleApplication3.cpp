#include <iostream>
#include <cmath>
#include <conio.h>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int x, y;

void dobuleNumber() {
	cout << "Result - ";
	cout << x * y;
}

int main() {
	cout << "First number\n";
	cin >> x;
	cout << "Second number\n";
	cin >> y;
	dobuleNumber();
}

