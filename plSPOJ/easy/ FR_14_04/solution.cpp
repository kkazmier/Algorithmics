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
    map<char, int> values;
    string sequence;
    int resultOne = 0;
    int resultTwo = 0;

    values['2'] = 2;
    values['3'] = 3;
    values['4'] = 4;
    values['5'] = 5;
    values['6'] = 6;
    values['7'] = 7;
    values['8'] = 8;
    values['9'] = 9;
    values['T'] = 10;
    values['J'] = 11;
    values['Q'] = 12;
    values['K'] = 13;
    values['A'] = 14;

    cin >> sequence;
    for(int i = 0; i < sequence.size(); i++){
        char card = sequence[i];
        resultOne += values[card];
    }

    cin >> sequence;
    for(int i = 0; i < sequence.size(); i++){
        char card = sequence[i];
        resultTwo += values[card];
    }

    if(resultOne > resultTwo){
        cout << "JASIO";
    }

    if(resultOne < resultTwo){
        cout << "STASIO";
    }

    if(resultOne == resultTwo){
        cout << "REMIS";
    }
}
