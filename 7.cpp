#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int cnt = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt += a[i];

    }

    cout  << cnt << endl;

    return 0;
}