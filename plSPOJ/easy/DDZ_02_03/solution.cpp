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
    string sequence;
    int begin, end;

    cin >> sequence;

    for(int i = 0; i < sequence.size(); i++){
        if(sequence[i] == '0'){
            begin = i;
            break;
        }
    }

    for(int i = sequence.size() - 1; i >= 0 ; i--){
        if(sequence[i] == '1'){
            end = i;
            break;
        }
    }

    if(begin + 1 == end){
        cout << "PUSTY";
    }else{
        for(int i = begin + 1; i < end; i++){
            cout << sequence[i];
        }
    }


    //cout << begin << end;
}
