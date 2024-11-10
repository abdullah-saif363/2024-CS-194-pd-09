#include <iostream>
using namespace std;
main()
{
    int idx;
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado",
 "Pop", "Lock", "Arabesque"};
   string password;
   cout<<"Enter a password: ";
   cin>>password;
   if(true)
   {
    for(int i =0 ; i < 4 ; i++)
    {
        if(password[i]<'o'||password[i]>'9')
        cout<<"Invalid Input";
        break;

    }
   }
  for(int i =0 ; i < 4 ; i++)
  {
    
    idx = (password[i]-'0') + i;
    if(idx>9)
    {
        idx=idx%10;
    }
    cout<<moves[idx]<<",";
    
  }
   
   


}