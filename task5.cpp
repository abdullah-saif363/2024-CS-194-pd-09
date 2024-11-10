#include <iostream>
using namespace std;
main()
{
    bool flag = true ;
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    string characters[size];
    for(int i = 0; i < size; i++)
    {
        cin>>characters[i];
    }
    for(int i = 0; i < (size-1); i++)
    {
        if(characters[i] != characters[i+1])
        {
            flag = false;
        }
    }
    if(flag == true)
    {
        cout<<"true";
    }
    else
        cout<<"false";

}