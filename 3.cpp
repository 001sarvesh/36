//  Find the first and last element using the STL array

#include<bits/stdc++.h>
using namespace std;
int main()
{
    array<int,9> values{2,12,3,4,5,6,5,6,45};

//using operator
// cout<<"First element is :"<<values[0]<<endl;
// cout<<"Last element is :"<<values[values.size()-1]<<endl;

// using front() and back() function
cout<<"First element is :"<<values.front()<<endl;
cout<<"Last element is :"<<values.back()<<endl;

  return 0 ; 
}