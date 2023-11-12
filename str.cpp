#include <iostream>
#include <string>
using namespace std;

int Count(const string s) {
    int k = 0;
    size_t pos1 = 0;
    while ((pos1 = s.find("no", pos1)) != -1) {
        pos1++;
        k++;
    }

    size_t pos2 = 0;
    while ((pos2 = s.find("on", pos2)) != -1) {
        pos2++;
        k++;
    }
    return k;
}

string Change(string &s) {
    size_t pos = 0;
    while ((pos = s.find("no", pos)) != -1) {
        s.replace(pos, 2, "***");
        pos += 3;
    }
    return s;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    cout << "String contained " << Count(str) << " groups of 'no' or 'on" << endl;
    string dest = Change(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;
    return 0;
}
