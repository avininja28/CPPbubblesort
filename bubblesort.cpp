#include <iostream>
using namespace std;
int main()
{
    int n;
    int temp;
    int arr[5]={2,8,5,1,3};
    for (int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int a=0;a<5;a++)
    {
        cout<<arr[a]<<" ";
    }
    return 0;
}