#include <iostream>
#include <vector>
using namespace std;
int main(){
//     //first example
//     vector<int>vec={29,59,30,58};
//     for(int i:vec){
//         cout<<i<<endl;
//     }
//     cout<<"printed the elements succesfully"<<endl;

//     //second example
//     vector<int>roll={39,98,76,38};
//     for(int i:roll){ // acessing the elements
//         cout<<i <<endl;
//     }

//  vector<string>names={"pratik","saiesh","parth"};
//  for(string i:names){  //for the string elements we can use string i 
//     cout<<i<<endl;
//  }

// //vector oprations
// //declaring and intializing the vector
// vector<int>now(10,10);
// for(int i :now){
// cout<<i ;
// }
//adding the elemts in an vector
/**vector<int>pratik={39,59};
pratik.push_back(99); //push_back function
pratik.push_back(39);
pratik.push_back(100);
for(int i :pratik){
    cout<<i<<endl; 
} **/

//by push the elements by using emplace_back method
/**vector<int>vec={24,56,20};
vec.emplace_back(100); //push the elements from back
vec.emplace_back(40); 
for(int i:vec){
    cout<<i <<endl;  **/

//removing the elements from the back
/**vector<int>vec={37,56,98,78};
vec.pop_back();  //pop_back function
for(int i:vec){
    cout<<i<<endl; **/

//removing the elements from the back
/**vector<int>vec={37,56,98,78};
vec.erase(vec.begin()); //detele the first elements
for(int i:vec){
    cout<<i<<endl; **/

//remove the elements from the range 
/**vector<int>vec={37,56,98,78};
vec.erase(vec.begin(),vec.begin()+2); //detele the two elements
for(int i:vec){
    cout<<i<<endl;  **/

//direct accsessing the elements in an vector
/**vector<int>vec={37,56,98,78};
cout<<vec[2];//third position elements is accsessed
cout<<vec.front();//front element
cout<<vec.back(); //second element**/

//checking the size of vector
/**vector<int>vec={37,56,98,78};
cout<<vec.size();//check the size of the vector
cout<<vec.capacity(); //check the capacity of the vector
cout<<vec.empty(); **/  // check the vector is empty or not
































}







