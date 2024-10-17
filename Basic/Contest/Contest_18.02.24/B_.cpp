#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n; // Read the number of signs for the current test case

        vector<int> a(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j]; // Read the periodicity of each sign
        }

        int year = a[0];
        for (int j = 1; j < n; j++) {
            year = (year * a[j]) / __gcd(year, a[j]); // Calculate the least common multiple
        }

        cout << year << endl; // Output the year when all n signs will occur
    }

    return 0;
}