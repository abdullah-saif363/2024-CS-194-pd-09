#include <iostream>
using namespace std;

main()
{
    float quantity,totalbill;
    string fruitname;
    string fruits[4] = {"peach","apple","guava","watermelon"};
    int price[4] = {60,70,40,30};
    cout<<"Enter the name of the fruit: ";
    cin>>fruitname;
    cout<<"Enter the quantity of that price: ";
    cin>>quantity;
    for(int i =0 ; i < 4 ; i++)
    {
        if(fruits[i]==fruitname)
        {
            totalbill = price[i]*quantity;
        }
    } 
   cout<<"Total bill: "<<totalbill;

}