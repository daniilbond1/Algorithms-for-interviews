
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string input1;
    string input2;
    long long  counter = 0;

    cin >> input1;
    cin >> input2;


    for (int i = 0;i < input1.size();i++) {
        for (int m = 0;m < input2.size();m++) {
            if (input1[i] == input2[m]) {
                counter++;
            }
        }
    }

    cout << counter;
}