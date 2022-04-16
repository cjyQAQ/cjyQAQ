#include <iostream>
using namespace std;

class AA
{
public:		
	AA();
	~AA();
private:
	static int s;
	static int t;
};
int main()
{
	AA a = new AA();
	a.t = 10;
	a.s = 20;
	cout<<a.t<<endl;
	cout<<a.s<<endl;
	cout<<"***"<<endl;
	return 0;
}

