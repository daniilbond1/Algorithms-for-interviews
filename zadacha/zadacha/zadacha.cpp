#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string delete_spaces(string a) {

    bool b = false;
    int   counter = 0;
    int counter_2 = 0;

    for (int i = 0; i < a.size();i++) {

        if (a[i] == ' ' && b == false) {
            b = true;
        }
        if (a[i] == ' ' && b == true) {
            counter++;
        }
        if (a[i] != ' ' && i != 0) {
            swap(a[i - counter], a[i]);
            if (counter != 0) {
                counter_2++;
            }
            counter--;
            b = false;
        }
    }

    return a;
}

int main()
{
    string a;
    getline(cin, a);

    a = delete_spaces(a);

    cout << a;

}

