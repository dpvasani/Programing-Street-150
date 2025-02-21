#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int sum = 0;
    int originalN = n;
    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, 3);
        n = n / 10;
    }
    if (sum == originalN) {
        cout << "Armstrong Number";
    } else {
        cout << "Not an Armstrong Number";
    }
    return 0;
}