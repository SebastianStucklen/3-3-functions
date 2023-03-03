#include<iostream>
using namespace std;
int FeedTurtle(char foodType, int amount);


int main() {
	int amount;
	char foodType;
	cout << "(g)rass, (s)trawberries, or s(h)rimp" << endl;
	cin >> foodType;
	cout << "enter food amount" << endl;
	cin >> amount;
	cout << FeedTurtle(foodType, amount) << endl;
}

int FeedTurtle(char foodType, int amount) {
	if (foodType == 'g')
		return amount;
	if (foodType == 's')
		return amount * 2;
	if (foodType == 'h')
		return amount * 3;
}