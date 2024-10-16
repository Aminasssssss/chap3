#include <iostream>
using namespace std;

int main() {
int n; 
cin >> n;
vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];


    }
    bool k=false;
    for (int i = 0; i < n; i++){ 
        if (a[i]==0){
            k=true;
            break;
        }
        else{
            k=false;
        }
    }
    if(k==true){
        cout<< "YES";
    }
    else{
        cout <<"NO";
    }
return 0;

}
