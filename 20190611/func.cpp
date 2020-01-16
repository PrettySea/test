#include <iostream>
using namespace std;
int  func(int &i)
{
	i = 20;
	return i;
}

int func(const int &i)
{
	
	return i;
}


int main()
{
	const int a = 10;
	cout<<"a="<<func(a)<<endl;

	return 0;
}
