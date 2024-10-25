#include <iostream>
using namespace std;

int Trifibbo(int n);

int main(){
    int n, trifibo;
    cin >> n;

    trifibo = Trifibbo(n);

    cout << trifibo << endl;
}

int Trifibbo(int n){
    if(n == 0 || n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    return Trifibbo(n-1) + Trifibbo(n-2) + Trifibbo(n-3);
}