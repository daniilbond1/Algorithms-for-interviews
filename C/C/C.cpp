#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> input;
    int b = 0;
    int c = 0;
    int counter = 0;
    int max_counter = 0;

    cin >> b;

    for (int k = 0;k < b;k++) {
        cin >> c;
        if (input.size() == 0) {
            input.push_back(c);
        }
        else if (c != input[input.size() - 1]) {
            input.push_back(c);
        }
    }

    for (int i = 0;i < input.size();i++) {
        cout << input[i]<<endl;
    }

}

