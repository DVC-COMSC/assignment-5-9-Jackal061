
#include <iostream>
using namespace std;

int main()
{
	int prev, current;
	cin >> prev;
	cout << prev; 
	

	while (true) {
		cin >> current;
		if (current > prev){
			break;
		} else {
			cout << current;
			current = prev;
		}
	}
}
