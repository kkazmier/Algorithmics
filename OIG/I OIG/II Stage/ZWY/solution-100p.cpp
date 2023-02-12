#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    int maxResult = 0;
    vector<int> results;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int result;
        cin >> result;
        results.push_back(result);
    }

    for (int i = 0; i < results.size(); i++) {
        if(results[i] > maxResult) {
            maxResult = results[i];
        }
    }

    for (int i = 0; i < results.size(); i++) {
        if(results[i] == maxResult) {
        char letter = 'A' + i;
            cout << letter;
        }
    }
}