#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;


   
    cin >> a;

    cin >> b;

    

    
    for (int i = a; i <= b; i++) {
        
        if (sqrt(i) == static_cast<int>(sqrt(i))) {
            cout << i << " ";
        }
    }

    cout << endl; 

    return 0;
}