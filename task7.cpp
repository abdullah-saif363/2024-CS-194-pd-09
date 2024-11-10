#include <iostream>
using namespace std;
main()
{
    int i=0,j=0,k=0,count =0;
    string word1;
    string word2;
    cout<<"Enter a string 1: ";
    cin>>word1;
    cout<<"Enter a string 2: ";
    cin>>word2;
    for( i = 0; word1[i] != '\0' ;i++)
    {

    }
    for( j = 0;j < i; j++)
    {
        for(k=0;k < i; k++)
        {
            if(word1[j]==word2[k])
            {
                word2[k] = ' ';
                count++;
                break;
            }
        }

    }
    cout<<"Number of common characters are: "<<count;

}

