// 🦚Hare Krishna 🙇
// Krishna wants you in his personal service 😃
// so Please Do your seva it  takes only <10 min 
// ys Rushikesh 
// Udemy logo
// The Ultimate MySQL Bootcamp: Go from SQL Beginner to ExpertFundamentals of Operating Systems%-----------ABOUT ME-----------


#include <iostream>
// #include <bits/stdc++.h>
#include<vector>
using namespace std;


  void fun (int n ){
    vector <bool> isprime (n+1,true );
    isprime[0]=isprime[1]=false;

    for (int i=2 ;i <=n;i++){
        if(isprime[i]){
            for(int p=i*i;p<=n;p+=i){
               
                isprime[p]=false;
            }
        }

    }
       for (int i=2;i<n;i++){
        if(isprime[i]){
            cout <<i<<" ";
        }
       }
  }





int main() {
   cout <<"hello world"<<endl;

     
   fun(50);




    return 0; // Return success code
}

