#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;


int main() {
    int n; 

    cin >> n;
    int cnt;
    cnt=0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cnt++;
          
        }

    }

   cout<<cnt;


    return 0;
}
