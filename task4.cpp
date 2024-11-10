#include <iostream>
using namespace std;
main()
{
    bool flag ;
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int numbers[size];

    for(int i = 0;i < size ; i++)
    {
        cin>>numbers[i];
    }
    for(int j = 0; j < size ; j++)
    {
        if(numbers[j]%10 == 7 || numbers[j]/10 == 7 )
        {
            flag = true;
            break;
        }
        
    }
    if(flag)
    {
        cout<<"BOOM!";
    }
    else
    cout<<"there is no 7 in the array";
}