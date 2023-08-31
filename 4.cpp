// 4. Returns the element from the given index using the STL array.

#include<bits/stdc++.h>
using namespace std;
int main()
{
array<int,8> arr = {1,2,3,45,6,7,87,4};

cout<<"Element at index 0 is :"<<arr.at(0)<<endl;
cout<<"Element at index 3 is :"<<arr.at(0)<<endl;
cout<<"Element at index 4 is :"<<get<0>(arr)<<endl;


  return 0 ;
}