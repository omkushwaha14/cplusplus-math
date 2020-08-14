#include<iostream>
#include <map>

using namespace std;
 int roman(string s){

 map<char,int> m={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
int sum=0;
for(int i=0;i<s.length();i++){
    if(m[s[i+1]]<=m[s[i]]){
       sum=sum+m[s[i]];
    }
    else{
        sum=sum-m[s[i]];
    }

}
cout<<sum;


 }



int main(){
    string s;
    cin>>s;
    roman(s);
 }
