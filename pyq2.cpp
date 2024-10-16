#include<iostream>
using namespace std;
namespace libraryA{
	void display(){
		cout << "Data of Library A." << endl;
	}
}
namespace libraryB{
	void display(){
		cout << "Data of Library B." << endl;
	}
}
int main(){
	libraryA::display();
	libraryB::display();
return 0;
}