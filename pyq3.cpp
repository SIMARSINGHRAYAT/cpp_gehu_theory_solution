#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	int n;
	cout << "Enter String Size : " << endl;
	cin >> n;
	string str[100];
	cout << "Enter string : " << endl;
	for(int i = 0; i < n; i++){
		cin >> str[i];
	}
	sort(str, str + 10);
	cout << " Modified string in dictionary order is : " << endl;
	for(int i = 0; i < n; i++){
		cout << str[i] << endl;
	}
return 0;
}