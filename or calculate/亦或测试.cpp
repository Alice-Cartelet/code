#include<iostream>
#include<string>
using namespace std;
int main()
{
    char s[100];
    char ss[100];
    printf("输入第一个数据：");
    scanf("%s",&s);
    printf("输入第二个数据：");
	scanf("%s",&ss);
    string sss;
    for(int i=0;s[i]!='\0'&&ss[i]!='\0';i++) 
	{
        sss+=static_cast<char>(s[i]^ss[i]);
    }
    cout<<sss;
    return 0;
}
