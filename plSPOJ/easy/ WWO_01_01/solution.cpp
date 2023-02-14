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
    int a, b, c, n, result;
    int boysCount = 0;
    int girlsCount = 0;
    string name;
    cin >> a >> b >> c;
    n = a + b + c;

    while(n--){
        cin >> name;
        if(name.back() == 'a'){
            girlsCount++;
        }else{
            boysCount++;
        }
    }

    result = min(girlsCount, boysCount);
    cout << result;
}
