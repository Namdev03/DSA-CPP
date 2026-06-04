#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number";
    cin>>num;
    int ans=0;
    int mul =1;
    while(num!=0){
        int rem = num%10;
        num/=10;
        ans=ans+mul*rem;
         mul*=2;
    }
    cout<<ans;
    return 0;
}