#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int arr_size = 0;
        int op_num = 0;
        int num_negative = 0;
        for (int i = 0; i < n; i++) {
            int cur_num;
            cin >> cur_num;
            a[arr_size] = cur_num;
            arr_size++;
        }
        for (int i = 0; i < arr_size; i++) {
            if (a[i] == -1) {
                num_negative++;
            }
            if (a[i] == 0) {
                op_num++;
            }
        }
        op_num+=(num_negative%2) * 2;
        cout << op_num << '\n';
    }
    return 0;
}