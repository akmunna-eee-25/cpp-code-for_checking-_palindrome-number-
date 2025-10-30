#include<iostream>
using namespace std;
int main()
{ 
     while(1) {

     long long rev=0,result,n;
     cout<<" Enter the value for checking palindrome:";
     cin>>n;
     long long a=n;
     while(n>0){

        result=n%10;
        n=n/10;
        rev=rev*10+result;
        
        }

     if(rev==a){
      cout<<"This number is palindrome"<<endl;}
      else
      {
          cout<<"This number is not palindrome";
      }
}
      return 0;


}

