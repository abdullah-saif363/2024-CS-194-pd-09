#include <iostream>
using namespace std;
main()
{
    string moviename;
    string movies[5]={"Gladiator","StarWars","Terminator","TakingLives","TombRider"};
    int price = 500;
    float totalprice = 0;
    cout<<"Enter a movie name: ";
    cin>>moviename;
    for(int i = 0; i< 5 ; i++)
    {
        if(movies[i]==moviename)
        {
            if(i%2==0)
            {
                totalprice = 500*0.9;
            }
            else{
                totalprice = 500*0.95;
               }

        }
    }

cout<<"price of movie is: "<<totalprice;

}