/*Given an integer n, return true if it is a power of two. Otherwise, return false.
 An integer n is a power of two, if there exists an integer x such that n == 2x.

 Example 1:
Input: n = 1
Output: true
Explanation: 20 = 1
 
Example 2:
Input: n = 16
Output: true
Explanation: 24 = 16
 
 */


#include<iostream>
using namespace std;
int main(){
    int n=16;
    int ans = 1;
    for(int i=0; i<=30; i++){
        // int ans = pow(2,i); //Pow is a inbuilt function whcih checks the power

        if(ans==n){
            cout << "true" << " ";
        } 
       ans = ans*2; 
    }
   
    
}