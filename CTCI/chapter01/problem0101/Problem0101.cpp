#include <iostream>
#include <string>
using namespace std;

// [1.1] Implement an algorithm to determine if a string has all unique characters.

class Problem0101 {
public:
    bool allUniqueChars(string str);
};

bool Problem0101::allUniqueChars(string str) {
    // Optimization
    // If # chars > 256 there must be duplicates
    if (str.length() > 256) {
        return false;
    }
    // The meat
    bool charCount[256] = {false};
    for (int i=0; i<str.length(); i++) {
        int charVal = str.at(i);
        if (charCount[charVal]) {
            return false;
        }
        charCount[charVal] = true;
    }
    return true;
}

int main() {
    Problem0101 problem0101;
    cout << "~Problem0101~" << endl;
    string str = "thisisastringwithrepeatchars";
    cout << str << endl << problem0101.allUniqueChars(str) << endl;
    string str2 = "asdfghjkl";
    cout << str2 << endl << problem0101.allUniqueChars(str2) << endl;
    return 0;
}
