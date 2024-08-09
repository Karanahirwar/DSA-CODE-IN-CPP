// Decimal to binary convertion
#include<iostream>
#include <cmath>
using namespace std;
int DecimaltoBinary_method1(int n){
    // division method 
 double binaryno=0;
    int i = 0;
    while (n>0){
int bit = n%2;
 binaryno= bit*pow(10,i++ )+binaryno;
n=n/2;
    }    
return binaryno;
}
int DecimaltoBinary_method2(int n){
    // bitwise method
double binaryno=0;
int i = 0;
while(n>0){
int  bit= n&1;
 binaryno= bit*pow(10,i++ )+binaryno;
 n = (n>>1);
}
return binaryno;
}

int main(){
cout<<"enter the value of n:";
int n; 
cin>>n;
// int binary = DecimaltoBinary_method1( n);
// cout<<binary<<endl; 
int binary = DecimaltoBinary_method2( n);
cout<<binary<<endl; 

}