#include <bits/stdc++.h>
using namespace std;

int main(){
    int ts, tks, N1, N2, s;
    cin >> ts >> tks;
    N1 = ts / 100;
    N2 = ts / 50;
    while(s != ts){
        s = (N1 * 100) + (N2 * 50);
        if(s > ts && N1 + N2 >= tks){
            --N2; 
        } else{
            --N1;
            while(N1 + N2 != tks){
                ++N2;
            }
        }
    }
    cout << N1 << " " << N2;
    return 0;
}
