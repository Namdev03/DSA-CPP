#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number";
    cin>>num;
    int sum=0;
    while(num){
    int rem = num%10;
    sum = sum +rem;
    num/=10;
    }
    cout<<sum;
    return 0;
}