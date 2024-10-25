#include <iostream>
using namespace std;

int recursiva(int n);

int main(){
    int n, resultado;
    cin >> n;

    resultado = recursiva(n);

    cout << resultado << endl;
}

int recursiva(int n){
    if(n == 1){
        return 1;
    }
    return n + recursiva(n-1);
}
