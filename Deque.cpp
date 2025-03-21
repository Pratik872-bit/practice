#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int>no={98,78,45,26,35};
 //printing the elements  dqueue
/**for(int i :no){
    cout<<i <<endl;
 } **/

//pushing the at the last elements in the deque
/**no.push_back(100);
for(int i:no){
    cout<<i <<endl;
} **/
//pushing the elements at the front
/**no.push_front(900);
for(int i :no){
    cout<<i <<endl;
}**/

//emplace back function
/**no.emplace_back(200);
for (int i:no){
    cout<<i <<endl;
}**/

//accessing the first element
//cout<<no.front();

//acssesing the last element
//cout<< no.back();

//acsseing the element from the particular index
//cout<<no.at(3);

//removing elements from the deque
//no.pop_back();
//no.pop_front();
//for(int i:no){
 //   cout<<i <<endl;

//inserting the elements at specific position
/**auto it=no.begin();
no.insert(it,100);
for(int i :no){
    cout <<i <<endl;

}  **/

//clearing the deque
/**no.clear();
for(int i:no){
    cout<<i <<endl;
}**/

}