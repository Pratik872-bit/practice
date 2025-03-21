#include <iostream>
#include <map>
using namespace std;
int main(){
map<int,int>mp; //declaring the map here 
mp.insert({39,54}); //inserting the elements
mp.insert({56,90});
mp.insert({45,87});
mp.insert({87,32});
//accsessing the elements
//cout<<mp[56]; //here pass the keys only then it will give you the value of that key

//remove the element by the key
mp.erase(39);
for(auto&pair:mp){
    cout<<pair.first<<" " <<pair.second<<" ";
}
}