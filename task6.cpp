#include <iostream>
using namespace std;
main()
{int size;
 cout<<"Enter number of times even-odd transformation need to be done: ";
 cin>>size;
 int numbers[3];
 cout<<"Enter the array: "<<endl;
 for (int k =0 ; k < 3; k++)
 {
    cin>>numbers[k];
 }
 cout<<"[";
 for(int i = 0 ; i < size; i++)
 {
    for(int j =0 ; j<3;j++ )
  {
    if(numbers[j]%2 == 0)
    numbers[j] = (numbers[j]-2);
    else
    numbers[j] = (numbers[j]+2);
  }

 }
 for (int l = 0; l < 3 ; l++)
 {
   cout<<numbers[l]<<",";
    
 }
 cout<<"]";
 

}