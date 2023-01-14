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
    int n, h;
    int a, b, c;
    int hills = 0;
    vector<int> heights;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> h;
        heights.push_back(h);
    }
    //cout << heights.size();
    for (int i = 1; i < heights.size() - 1; i++) {
        a = heights[i - 1];
        b = heights[i];
        c = heights[i + 1];
        if (a < b && b > c) {
            hills++;
        }
    }

    cout << hills;
}
