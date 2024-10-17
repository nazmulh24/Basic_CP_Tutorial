#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

pair<string, long long> find_lexicographically_smallest(int n, string& row1, string& row2) {
    string path; // Stores the lexicographically smallest path
    long long count = 1; // Initialize the count of paths to 1
    int i = 0, j = 0; // Starting position at (1,1)
    
    while (i < n || j < n) {
        // If moving right is possible and yields a lexicographically smaller string
        if (j < n - 1 && (path.empty() || (path.back() == '0' && row1[j + 1] == '0'))) {
            path.push_back(row1[j + 1]); // Move right
            j++; // Update column index
        } 
        // If moving down is possible and yields a lexicographically smaller string
        else if (i < n - 1 && (path.empty() || (path.back() == '0' && row2[i + 1] == '0'))) {
            path.push_back(row2[i + 1]); // Move down
            i++; // Update row index
        }
        // If both directions lead to the same lexicographically smallest string
        else {
            path.push_back('0'); // Move down
            i++; // Update row index
            count++; // Increment count of paths
        }
    }
    
    return {path, count};
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        string row1, row2;
        cin >> row1 >> row2;
        
        pair<string, long long> result = find_lexicographically_smallest(n, row1, row2);
        cout << result.first << endl;
        cout << result.second << endl;
    }
    
    return 0;
}
