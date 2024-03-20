/*
 Code Implementation in C++ (Bit Stuffing and De-stuffing)
 Author: Mehedi Hasan
 Student of GUB
 Department of CSE
*/

#include<iostream>
#include<string.h>
using namespace std;
void bit_staffing(int N,int arr[])
{
    int i,j,k,count_bit;
    i=0;
    j=0;
    count_bit=1;
    int barr[30];
    while(i<N)
    {
        if(arr[i] == 1)
        {
            barr[j] = arr[i];
            for(k=i+1; arr[k]==1 && k<N && count_bit<5; k++)
            {
                j++;
                barr[j] = arr[k];
                count_bit++;
                if(count_bit == 5)
                {
                    j++;
                    barr[j] = 0;
                }
                i=k;
            }
        }
        else
        {
            barr[j] = arr[i];
        }
        i++;
        j++;
    }
    cout<<"Output: ";
    for(i=0; i<j; i++)
    {
        cout<<barr[i];
    }
}
void bit_Destaffing(int N,int arr[])
{
    int i,j,k,count_bit;
    i=0;
    j=0;
    count_bit=1;
    int barr[30];
    while(i<N)
    {
        if(arr[i] == 1)
        {
            barr[j] = arr[i];
            for(k=i+1; arr[k]==1 && k<N && count_bit<5; k++)
            {
                j++;
                barr[j] = arr[k];
                count_bit++;
                if(count_bit == 5)
                {
                    k++;
                }
                i=k;
            }
        }
        else
        {
            barr[j] = arr[i];
        }
        i++;
        j++;
    }
    cout<<"Output: ";
    for(i=0; i<j; i++)
    {
        cout<<barr[i];
    }
}

int main()
{
    int N;
    cout<<"Enter the Length of Bits: ";
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++)
    {
        printf("Enter the [%d]Bit : ",i+1);
        cin>>arr[i];
    }
    bit_staffing(N,arr);
    string choice;
    cout<<"\nDo You Want to De-Stuffing(y/n): ";
    cin>>choice;
    if(choice == "y")
    {
        int N;
        cout<<"Enter the Length of Bits: ";
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
        {
            printf("Enter the [%d]Bit : ",i+1);
            cin>>arr[i];
        }
        bit_Destaffing(N,arr);
    }
    else
    {
        return 0;
    }
    return 0;
}
