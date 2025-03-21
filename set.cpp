#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int>s;
//adding the element in the set
s.insert(29);
s.insert(30);
s.insert(34);
s.insert(39);
//desplaing the elements in set
/**for(int i :s){
    cout<<i <<" ";
}  **/


//erasing the element
/**s.erase(39);  //ereasing the 39 element                     
for(int i :s){
    cout<<i <<" ";

}  **/
//checking the size of the set
cout<<s.size();
}