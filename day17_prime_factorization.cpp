#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> primeFactorization(long long N) {
    vector<int> factors;

    
    while (N % 2 == 0) {
        factors.push_back(2);
        N /= 2;
    }

   
    for (long long i = 3; i <= sqrt(N); i += 2) {
        while (N % i == 0) {
            factors.push_back(i);
            N /= i;
        }
    }

   
    if (N > 2) {
        factors.push_back(N);
    }

    return factors;
}

int main() {
    long long N;

    cout<<"ener value of N:";
    cin >> N;

    vector<int> result = primeFactorization(N);

    for (int prime : result) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
