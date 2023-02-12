#include<iostream>
#include<list>
#include <iterator>

using namespace std;

int main() {
    int n;
    list<string> arrayList[151];
    list<string> wordList;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string word;
        cin >> word;
        int wordLength = word.size();
        arrayList[wordLength].push_back(word);
    }

    list<string>::iterator listIterator;

    for (int i = 1; i <= 150; i++) {
        arrayList[i].sort();
    }

    for(int i = 0; i < 151; i++) {
        wordList = arrayList[i];
        if (wordList.size() > 0) {
            for (listIterator = wordList.begin(); listIterator != wordList.end(); listIterator++) {
                cout << *listIterator;
                cout << endl;
            }
        }
    }
}