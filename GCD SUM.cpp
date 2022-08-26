#include <iostream>

using namespace std;

long long sum(long long n);
long long GCD(long long n, long long total);

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long total = sum(n);
        while (GCD(n, total) == 1) {
            n++;
            total=sum(n);
        }
        printf("%d\n", n);
    }

}

long long sum(long long n) {
    long long total = 0;
    long long remainder;
    while (n > 0) {
        remainder = n % 10;
        total += remainder;
        n = (n - remainder) / 10;
    }
    return total;
}

long long GCD(long long n, long long total) {
    while (total != 0) {
        int tmp = n % total;
        n = total;
        total = tmp;
    }
    return n;
}