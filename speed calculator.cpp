#include <iostream>
using namespace std;
int main()
{
	int a,u,t,s;
	cout<<"Ansh Rana"<<endl;
	cout<<"19"<<endl;
	cout<<"enter initial speed"<<endl;
	cin>>u;
	cout<<"enter time"<<endl;
	cin>>t;
	cout<<"enter acceleration"<<endl;
	cin>>a;
	s = (u*t)+(a*(t*t))*0.5;
	cout<<"speed = "<<s<<endl;
	return 0;
}
