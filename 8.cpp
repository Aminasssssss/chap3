#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int cnt1, cnt2, cnt3;
    cnt1=0;
    cnt2=0;
    cnt3=0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];


    }



    for (int i = 0; i < n; i++) {
        if(a[i]>0){
            cnt1++;

        }
        if(a[i]<0){
            cnt2++;
        }
        if(a[i]==0){
            cnt3++;
        }
    }
    cout  << cnt1<< " "<< cnt2<< " "<< cnt3;

    return 0;
}