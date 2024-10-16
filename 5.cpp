#include <iostream>
using namespace std;

int main() {
    int n; 

    cin >> n;

    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cout<<i<< " ";
            break;
        }
    }

   
    cout << n << endl;

    return 0;
}
