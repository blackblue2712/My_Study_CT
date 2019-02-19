#include<iostream>
#define Maxsize 100
#include<string>
#include<vector>

using namespace std;


int main() {
	std::vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	//for (std::vector<int>::iterator i = a.begin(); i != a.end(); i++) {
	//	cout << *i << endl;
	//}
	//for (auto i = a.begin(); i != a.end(); i++) {
	//	cout << *i;
	//}
	for (auto &i : a) {
		cout << i;
	}
	system("pause");
	return 0;
}
