#include <iostream>
using namespace std;

int ContaRecursivo(int n);

int main(){
    int n, quantidade;
    cin >> n;

    quantidade = ContaRecursivo(n);

    cout << quantidade << endl;
}

int ContaRecursivo(int n){
    if(n < 1){
        return 0;
    }
    return 1 + ContaRecursivo(n/10);
}