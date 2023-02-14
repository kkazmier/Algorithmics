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
    int a, b;
    cin >> a >> b;

    for(int i = a; i <= b; i++){
        if(i % 2 == 0 && i % 3 != 0){
            cout << 'a';
        }else if(i % 2 != 0 && i % 3 == 0){
            cout << 'b';
        }else if(i % 6 == 0){
            cout << "ab";
        }
    }
}
