#include<iostream>
using namespace std;
int main(){
    int a[4]={1,2,3,2};
    for (int i = 0; i <sizeof(a)/sizeof(a[0]); i++)
    {
        cout << a[i] ;
    }
    
}