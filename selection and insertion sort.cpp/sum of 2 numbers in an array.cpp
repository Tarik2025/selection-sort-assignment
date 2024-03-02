#include<iostream>
using namespace std;
int main()
{
   // int n;
    //cout<<"enter the size of the array:";
    //cin>>n;
   // int arr[n];
    //cout<<"enter the elements in the array:"<<endl;
    //for(int i=0;i<n;i++)
    //{
     //   cin>>a[i];

    //}
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    
    int n=10;
    int minsum=100;
    for(int i=0;i<n;i++)
    {  
        for(int j=i+1;j<n;j++)
        {
         int maxsum=a[i]+a[j];
         
          if(maxsum<minsum)
          {
          minsum=maxsum;
          }
         
        }
        
    }
     cout<<"minimum sum is:"<<minsum<<endl;
    
    
}
