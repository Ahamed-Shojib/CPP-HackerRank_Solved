/*
 Code Implementation in C++ (Decimal to Binary conversion)
 Author: Mehedi Hasan
 Student of GUB
 Department of CSE
*/

#include<iostream>
using namespace std;
void decimal_to_binary(int num){

    int arr_binary[32],i,j;

    while(num>0)
    {
        arr_binary[i] = num % 2;
        num = num/2;
        i++;
    }

    cout<<"Binary: ";
    for(j=i-1;j>=0;j--){
        cout<<arr_binary[j];
    }

}

int main()
{
    int num;
    cout<<"Enter the Decimal Number: ";
    cin>>num;
    decimal_to_binary(num);

}
