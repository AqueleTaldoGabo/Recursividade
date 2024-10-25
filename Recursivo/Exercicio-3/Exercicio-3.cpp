#include <iostream>
using namespace std;

int SomaPares(int n);

int main(){
    int n, somapar;
    cin >> n;

    somapar = SomaPares(n);

    cout << somapar << endl;
}

int SomaPares(int n){
    int soma = 0;
    if(n == 1){
        return 0;
    }
    if(n%2 == 0){
        soma = n;
    }
    return soma + SomaPares(n-1);
}