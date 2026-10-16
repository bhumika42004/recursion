#include<iostream>
using namespace std;
void printnums(int n){
    if(n==1){
        cout<<"1\n";
        return;
    }
    cout<<n<<endl;
    printnums(n-1);
}
int factorial(int n){
    if(n==0 && n==1){
        cout<<"1\n"<<endl;
    }
    return n*factorial(n-1);
}
int main(){
   // printnums(5);
factorial(5);
int x=factorial(5);
cout<<x<<endl;
    return 0;
}