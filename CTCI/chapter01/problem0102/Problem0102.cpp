#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// [1.2] Implement a function void reverse(char *str) which reverses a null-terminated string.

void reverse(char *str) {
    // Using the string library
    int strLength = strlen(str);
    if (strLength > 0) {
        for (int i=0; i<ceil(strLength/2.0); i++) {
            // Swap
            char tmp = str[i];
            str[i] = str[strLength-i-1];
            str[strLength-i-1] = tmp;
        }
    }
}

void reverse2(char *str) {
    // Without using the string library
    char* start = str;
    char* end = str;
    char tmp;
    if (str) {
        while (*end) {
            ++end;
        }
        --end;

        while (str < end) {
            tmp = *str;
            *str++ = *end;
            *end-- = tmp;
        }
    }
    str = start;
}

int main() {
    cout << "~Problem0102~" << endl;
    char *str = "hellothere";
    //reverse(str);
    reverse2(str);
    cout << str << endl;
}
