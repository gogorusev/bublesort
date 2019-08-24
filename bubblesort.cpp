#include <iostream>
using namespace std;
int array1[1001];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>array1[i];
    }
    //bubble sort
    for(int i=1;i<=n;i++)
    {
        for(int j=1+i;j<=n;j++)
        {
            if(array1[i]>array1[j])
            {
               int x=array1[i];
               array1[i]=array1[j];
               array1[j]=x;
            }
        }
    }
    //for print
    for(int i=1;i<=n;i++)
    {
        cout<<array1[i]<<" ";
    }
    return 0;
}
