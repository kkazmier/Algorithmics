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
    string positionOne, positionTwo;
    cin >> positionOne >> positionTwo;

    if(positionOne[0] == positionTwo[0] || positionOne[1] == positionTwo[1]){
        cout << "TAK";
    }else{
        cout << "NIE";
    }
}
