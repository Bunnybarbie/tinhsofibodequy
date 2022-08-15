#include <iostream> 
#include<stdio.h>
using namespace std;

int gt(int n){
	if (n==0){
		return 1;
	}
	else
	return n*gt(n-1);
}
long fibo(int n){
	if(n<=1)
	return n;
	else
	return fibo(n-1)+fibo(n-2);
}
int main(){
	cout << fibo(5)<<endl;
	return 0;
}
