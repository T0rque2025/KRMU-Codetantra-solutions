#include <iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	x=+x;
	cout<<"+x = "<<x<<endl;
	x=-x;
	cout<<"-x = "<<x<<endl;
	x=-x;
	cout<<"x = "<<x<<endl;
	++x;
	cout<<"++x = "<<x<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"x++ = "<<x<<endl;
	x++;
	cout<<"x = "<<x<<endl;
	--x;
	cout<<"--x = "<<x<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"x-- = "<<x<<endl;
	x--;
	cout<<"x = "<<x<<endl;
}
