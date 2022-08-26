
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int a[n];
        int max = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (max < a[i]) max = a[i];
        }

        int nums[max+1];
        for (int i = 0; i <= max; i++) {
            nums[i] = 0;
        }

        for (int i = 0; i < n; i++) {
            nums[a[i]]++;
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[a[i]] > 1) {
                count += nums[a[i]];
                nums[a[i]] = 1; 
            }
        }
        printf("%d\n", count);
    }
    
}