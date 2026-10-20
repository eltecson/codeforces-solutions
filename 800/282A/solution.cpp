#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	int x = 0;
	for (int i = 0; i < n; i++) {
		string instruction;
		cin >> instruction;
		if (instruction == "X++" || instruction == "++X") {
			x++;
		} else if (instruction == "X--" || instruction == "--X") {
			x--;
		}
	}
	cout << x;
	return 0;
}
