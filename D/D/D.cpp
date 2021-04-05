#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string input1;
	string input2;
	bool flag = false;

	cin >> input1 >> input2;

	sort(input2.begin(), input2.end());
	sort(input1.begin(), input1.end());

	if (input1.size() == input2.size()) {
		for (int i = 0;i < input1.size();i++) {
			if (input1[i] != input2[i]) {
				cout << 0;
				flag = true;
				break;
			}
		}
	}
	else{
		cout << 0;
		flag = true;
	}

	if (flag == false) {
		cout << 1;
	}


}

