#include<bits/stdc++.h>
using namespace std;
class Human{
};
int main()
{
	function<void()>print=[&](){
		print("---------------");
	};
	funciton<int(int)>isOdd=[&](int num){
		if ( num & 1) return 1;
		return 0;
	};
	function<int(int,int>gcd=[&](int num1,int num2){
		return __gcd(num1,num2);
	
		// why they named gcd function as'__gcd'???
			return __gcd(num1,num2);
		
	}
	//------------------------------------
	cout<<"Assalamualaikum";
	return 0;
	// add a comment
	// 
}	

