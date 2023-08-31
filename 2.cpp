// Using STL Array returns the total number of elements in the array.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    array<int, 9> a = {1,2,3,4,5,6,7,8,9};
      
      for(auto i = a.begin(); i!= a.end(); i++){
        
          c++;
      }
      cout<<"The length of given array is :"<<c;
  return 0 ;
}