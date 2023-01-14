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
    int a, b, n;
    cin >> a >> b >> n;

    if (n == 33) {
        cout << "WRACAJ";
    } else {
        if (a < b) {
            cout << "W LEWO";
        } else {
            cout << "W PRAWO";
        }
    }
}
