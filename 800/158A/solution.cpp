#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	
	vector<int> scores(n);
	
	int score;
	bool isPositive = false;
	for (int i = 0; i < n; i++) {
		cin >> score;
		scores[i] = score;
		if (score > 0) {
			isPositive = true;
		}
	}
	int kScore = scores[k - 1];
	int advancers = 0;
	for (int i = 0; i < n; i++) {
		if (!isPositive) {
			break;
		}
		if (scores[i] >= kScore && scores[i] > 0) {
			advancers++;
		}
	}
	cout << advancers;
	return 0;
}
