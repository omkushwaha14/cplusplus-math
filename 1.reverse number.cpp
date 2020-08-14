#include<iostream>
using namespace std;

void reverse(int n){
    bool negative=false;
    if(n<0){
        negative=true;
        n=n*-1;

    } int sum = 0;
    while(n!=0) {
        int r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
if(negative) {
    sum =sum*-1;
    cout<<sum;

}
else{
    cout<<sum;
}

 }

int main(){
    int n;
    cin>>n;
    reverse(n);

}
