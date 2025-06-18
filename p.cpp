#include <iostream>

using namespace std;

int main(){
    int n,fib0=0,fib1=1,fibN;
    cout << "Enter the number : ";
    cin >> n;
    for (int i = 0; i < n;i++){
        cout << fib0 << " ";
        fibN = fib1 + fib0;
        cout << "\t[fibn]  " << fibN << endl;
        fib0 = fib1;
        fib1 = fibN;
    }
    cout << endl;

    return 0;
}