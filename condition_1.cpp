#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    string str[] = {"","one","two","three","four","five","six","seven","eight","nine"};
    cin>>a;
    for(int i=a;i<=a;i++){
        if(i<=9){
            cout<<str[i]<<endl;
        }
        else{
            cout<<"Greater than 9"<<endl;
        }
    }

    return 0;
}


