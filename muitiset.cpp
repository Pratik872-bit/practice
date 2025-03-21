#include <iostream>
#include <set>
using namespace std;
int main(){
    multiset<int>mul;
    mul.insert(20);
    mul.insert(30);
    mul.insert(40);  //repeated number are allowed
    mul.insert(40);
    mul.insert(70);
    mul.insert(80);
//printing the muitiset
for(int i :mul){
    cout<<i <<" ";
}
}