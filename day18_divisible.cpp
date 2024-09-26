#include <iostream>
#include <cmath>
using namespace std;

int countDivisors(long long N) {
    int count = 0;

    // Iterate up to the square root of N
    for (long long i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            count++; // Count divisor i

            // Count corresponding divisor N/i
            if (i != N / i) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    long long N;

    cout<<"enyet the number:-";
    cin >> N;

    int result = countDivisors(N);
    cout << result << endl;

    return 0;
}
