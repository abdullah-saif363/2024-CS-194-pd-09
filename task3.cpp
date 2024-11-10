#include <iostream>
using namespace std;
bool checklength(string word);
main()
{
    bool result;
    string word;
    cout<<"Enter a word: ";
    cin>>word;
    result = checklength( word);
    cout<<result;

}
bool checklength(string word)
{
     int i = 0;
    for( i = 0 ; word[i] != '\0'; i++)
    {

    }
    if(i%2 == 0)
    return true;
    else
    return false;

}