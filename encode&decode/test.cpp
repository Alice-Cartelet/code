#include<iostream>
#include"code-utf-8.h"
using namespace std;
int main()
{
	cout<<"----------------- TEST -----------------\n";
	string str;
	while (1)
	{
		cout<<"text: ";
		getline(cin,str);
		string str2=base64encode(str);
		string str3=urlencode(str); 
		cout<<"md5: "<<md5(str)<<"\nbase64encode£º"<<str2<<"\nbase64decode£º"<<base64decode(str2 )<<"\nurlencode: "<<str3<<"\nurldecode: "<<urldecode(str3);
		cout<<"\n-----------------------\n";
	}
	return 0;
}
