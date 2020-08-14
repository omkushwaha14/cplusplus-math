#include<iostream>
using namespace std;
 int palindrome(int a){
 if(a<0){
     cout<<"false";
      return 0;
 }
    int sum=0,val;
    val=a;
    while(a!=0){
        int r=a%10;
        sum=sum*10+r;
        a=a/10;
    }

 if(val==sum){
     cout<<"true";
 }else {
     cout << "false";
 }






}


int main(){
    int a;
    cin>>a;
    palindrome(a);



}
