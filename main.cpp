#include <iostream>
#include <vector>
using namespace std;


void printPrimes(int n, int m) {

    vector<bool> isPrime(m + 1, true);
    isPrime[0] = isPrime[1] = false; 


    for (int i = 2; i * i <= m; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= m; j += i) {
                isPrime[j] = false;
            }
        }
    }


    for (int i = n; i <= m; ++i) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl; 
}

int main() {
    int n=+1, m;

    cin >> n >> m;


    printPrimes(n+=1, m);

    return 0;
}