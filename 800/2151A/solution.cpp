#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        for (int i = 0; i < m; ++i) cin >> a[i];

        bool has_drop = false;
        for (int i = 0; i + 1 < m; ++i) {
            if (a[i] >= a[i+1]) { has_drop = true; break; }
        }

        if (has_drop) cout << 1 << '\n';
        else cout << (n - a[m-1] + 1) << '\n';
    }
}
// my old code was too complicated for codeforces to understand
// #include <iostream>
// #include <sstream>
// #include <string>
// #include <vector>
// using namespace std;

// // void printNestVec(vector<vector<vector<int>>> vv);
// void printVec(vector<int> vv);
// vector<vector<vector<int>>> getTestCases();

// int main() {
//   // Optimizations
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
  
//   // Get test cases
//   vector<vector<vector<int>>> testCases;
//   testCases = getTestCases();
  
//   // Actual Code
//   for (size_t i = 0; i < testCases.size(); i++) {
//     const int n = testCases[i][0][0]; // Number to reach
//     const int m = testCases[i][0][1]; // Length of the subarray of numbers
//     vector<int> fav_nums = testCases[i][1];

//     if (n == fav_nums.at(0) && m == 1) {
//       cout << 1 << '\n';
//       continue;
//     }
    
//     int size = 0; // To compare numbers real-time
//     int sub_arr_size = 0;
//     for (int j = 1; j <= n; j++) {
//       int start = 1;
//       while (start <= j) {
//         if (size < fav_nums.size() && start == fav_nums.at(size) && m == 1) {
//           sub_arr_size++;
//           start++;
//           continue;
//         }
//         else if (size < fav_nums.size() && start == fav_nums.at(size)) {
//           size++;
//           start++;
//           if (size == m) {
//             sub_arr_size++;
//             size = 0;
//           }
//           continue;
//         }
//         size = 0;
//         start++;
//       }
//     }
//     cout << sub_arr_size << '\n';
//   }
// }

// string getInput();
// // Gets test cases from input
// vector<vector<vector<int>>> getTestCases() {
//     string input = getInput();

//     istringstream stream(input);
//     string line;
//     getline(stream, line);
//     const int t = stoi(line);

//     const int v = 2;
//     vector<vector<vector<int>>> testCases;

//     for (int i = 0; i < t; i++) {
//         vector<vector<int>> testCase;
//         for (int j = 0; j < v; j++) {
//             getline(stream, line);
//             stringstream ss(line);
//             vector<int> set;
//             int x;
//             while (ss >> x) set.push_back(x);
//             testCase.push_back(set);
//         }
//         testCases.push_back(testCase);
//     }

//     return testCases;
// }

// // Gets input till EOF
// string getInput() {
//   string input, line;
//   while (getline(cin, line)) {
//     input += line + '\n';
//   }
//   return input;
// }

// // Prints vectors
// void printVec(vector<int> vv) {
//   for (int num: vv) {
//     cout << num << ' ';
//   }
//   cout << '\n';
// }

// Prints nested vectors
// void printVec(vector<vector<vector<int>>> vv) {
//   for (const auto& matrix : vv) {
//     for (const auto& row : matrix) {
//         for (int n : row)
//             cout << n << ' ';
//         cout << '\n';
//     }
//     cout << "---\n"; // separate 3D layers
//   }
// }