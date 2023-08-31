// Using STL Array gets and sets a reference to an element based on a given index.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    array <int,5> values{10,20,30,40,50};
    cout<<"Element at index 0 : "<<values[0]<<endl;
    cout<<"Element at index 1 : "<<values[1]<<endl;
    cout<<"Element at index 2 : "<<values[2]<<endl;
    cout<<"Element at index 3 : "<<values[3]<<endl;
    cout<<"Element at index 4 : "<<values[4]<<endl;

    // values[1] = 100;
    // values[2] = 200;

    cout<<"All elements :"<<endl;
    for (int i : values) // 
    {
      cout<<i<<" ";
    }
    cout<<endl;
  return 0 ;
}