#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main()
{
int n;
cout<<"enter the string size:";
cin>>n;
vector<string> str(n);
cout<<"enter the string:"<<endl;
for(int i=0;i<n;i++)
{
    cin>>str[i];
}
cout<<"the entered  string is :"<<endl;
for(int i=0;i<n;i++)
{
    cout<<str[i]<<" ";
}
for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-1-i;j++)
    {
        
        if(str[j]>str[j+1])
        {
            swap(str[j],str[j+1]);
        }
    }
}
cout<<"the sorted  string is :"<<endl;
for(int i=0;i<n;i++)
{
    cout<<str[i]<<" ";
}
}