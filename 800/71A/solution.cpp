#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	string words[n];
	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;
		words[i] = word;
	}
	
	for (int i = 0; i < n; i++) {
		string word = words[i];
		int wlen = word.length();
		if (wlen > 10) {
			cout << word[0] << wlen - 2 << word[wlen - 1] << endl;
		} else {
			cout << word << endl;
		}
	}
}
