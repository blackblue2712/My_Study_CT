#include<iostream>
#define Maxsize 100
#include<string>

using namespace std;


int main() {
	string s1, s2;
	int c = -1;
	int l = 0;

	fflush(stdin);
	getline(cin,s1);
	getline(cin,s2);

		for (int i = 0; i<s1.size(); i++) {
			for (int j = 0; j<s2.size(); j++) {
				if (s1[i] == s2[j]) {
					c = j;
				}

			}
			for (int s = c; s<c + 1; s++) {
				s2[s] = ' ';
			}
		}
		for (int i = 0; i < s2.size(); i++) {
			if (s2[i] == ' ') {
				l++;
			}
		}
	cout << l<<endl;
	cout << s1 << " " << s2 << endl;
	system("pause");
	return 0;
}
