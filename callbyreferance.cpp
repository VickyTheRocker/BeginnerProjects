#include <iostream>
#include <string>
using namespace std;
void swap(int* x, int* y)
{   int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{   int a, b;
   cout<<"Enter the values to be swapped: "; cin>>a>>b;
   cout<<"a = "<<a<<"\t"<<"b = "<<b;
   swap(&a,&b);
   cout<<endl;
   cout<<"Swapped values"<<endl;
   cout<<"a = "<<a<<"\t"<<"b = "<<b;
     return 0;
}
