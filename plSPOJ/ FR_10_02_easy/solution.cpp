#include <iostream>
#include <istream>
#include <fstream>
#include <cstdio>
#include <iomanip>
#include <map>
#include <set>
#include <list>
#include <vector>
#include <stack>
#include <algorithm>
#include <iterator>
#include <math.h>
#include <queue>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

//ios_base::sync_with_stdio(0);

int main() {
    //cout<<setprecision(2)<<fixed;
    set<char> letters;
    string word;
    int n;

    cin >> n;

    for(int i=0; i<n; i++) {
        char c;
        cin >> c;
        letters.insert(c);
    }

    cin >> word;

    int size = word.size();
    string result = "";
    for(int i=0; i<size; i++) {
        char letter = word[i];
        if(letters.count(letter) > 0) {
            result += letter;
            result += letter;
        } else {
            result += letter;
        }
    }

    cout << result;
}
