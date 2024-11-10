#include <iostream>
using namespace std;
main()
{
    int seconds,size,i=0,count=0,totalsecond=0;
    cout<<"Enter the size of the array: ";
    cin>>size;
    string arr[size];
    cout<<"Enter colors , one per line: "<<endl;
    for( i = 0; i < size ;i++)
    {
        cin>>arr[i];
    }
    seconds = 2*i;
    for(int j =0 ; j < (size-1);j++)
    {
        if(arr[j]!=arr[j+1])
        {
            count++;
        }
    }
    totalsecond =(seconds +count);
    cout<<"Total seconds are: "<<totalsecond;


}