#include <iostream>
using namespace std;


long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


long long lcm(long long N, long long M) {
    return (N * (M / gcd(N, M)));  
}

int main() {


    long long N, M;

    cout<<"enter first number"<<endl;

    cin >> N;
    
    cout<<"enter seconf number"<<endl;
    
    cin>> M;

    cout <<"LCM is:-"<< lcm(N, M) << endl;

   
}

   