#include <iostream>
#include <string>

using namespace std;

int main() { 
	string s;
	cin >> s;
	int n1 = 0, n2 = 0, n3 = 0;
	for (int i = 0; i < s.length(); i++) {
		switch (s[i]) { 
			case '1':
				n1++;
				break; 
			case '2':
				n2++;
				break; 
			case '3':
				n3++;
				break;
		}
	}
	bool first = true; 
	while (n1 > 0 || n2 > 0 || n3 > 0) {
		if (!first) {
			cout << "+"; 
		}
		if (n1 > 0) {
			cout << "1";
			n1--;
		} else if (n2 > 0) {
			cout << "2";
			n2--;
		} else if (n3 > 0) {
			cout << "3";
			n3--;
		}
		first = false;
	}
	cout << endl;
	return 0; 
}
