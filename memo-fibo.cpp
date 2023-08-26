#include<iostream>
using namespace std;

int A[10];
int fib( int n){
    if (n<=1){
         A[n]=n;
         return n;
    }
    else{
        if(A[n-2]==-1){
            A[n-2]=fib(n-2);
        }
         if(A[n-1]==-1){
            A[n-1]=fib(n-1);
         }
         return fib(n-2)+fib(n-1);
    }

}


int main(){
    int n=5;
    for(int i=0;i<=n;i++){
        A[i]=-1;
    }
    cout<<"The 5th term is"<<fib(n-1)<<endl;
    for(int i=0;i<=n;i++){
        cout<<fib(i)<<endl;
    }
    return 0;
}