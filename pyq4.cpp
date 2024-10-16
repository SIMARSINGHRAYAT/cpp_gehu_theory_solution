#include<iostream>
#include<string>
using namespace std;
class student{
	string names;
	int age;
	string address;
	public:
		student(){
			names = "unknown";
			age = 0;
			address = "unknown";
		}
	void setinfo(string n, int a){
	names = n;
	age = a;		
	}
	void setinfo(string n, int a, string adr){
		names = n;
		age = a;
		address = adr;
	}
	void display(){
		cout << "Names : " << names << " " << "Age : " << age << " " << "Address : " << address << endl;
	}
	~student(){
		cout << "Destructor called for " << names << endl;
	}
};

int main(){
	int n;
	cout << "Enter student database size : " << endl;
	cin >> n;
	student s[n];
	s[0].setinfo("Alice",20);
	s[1].setinfo("Simar",18,"Clement town");
	for(int i = 0; i < n; i++){
		s[i].display();
	}
return 0;
}