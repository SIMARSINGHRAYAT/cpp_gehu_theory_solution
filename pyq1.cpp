#include<iostream>
using namespace std;
void sort(int arr[], int n){
	int temp[n];
	int j = 0;
for(int i = 0; i < n ; i++){
	if(arr[i]%2 == 0){
		temp[j] = arr[i];
		j++;
	}
}
for(int i = 0; i < n; i++){
	if(arr[i]%2 != 0){
		temp[j] = arr[i];
		j++;
	}
}
for(int i = 0; i < n; i++){
	arr[i] = temp[i];
}
cout << "Sorted even/odd array is : " << endl;
for(int i = 0; i < n; i++){
	cout << arr[i];
	if(i < n - 1){
		cout << ",";
	}
}
cout << endl;
}
int main(){
	int student_strength;
	cout << "Enter Student strength : " << endl;
	cin >> student_strength;
	int roll_number[100];
	cout << "Enter roll number of student : " << endl;
	for(int i = 0; i < student_strength; i++){
		cin >> roll_number[i];
	}
	sort(roll_number, student_strength);
return 0;
}