#include <iostream>
#include<list>
using namespace std;
int main(){
    /**list<int>li={98,97,87,76};  // crating the list
    for(int i:li){   // pronting the elements
        cout<<i <<endl;
    }**/
//adding the elements in list at back
/**list<int>li={98,97,87,76};
li.push_back(100);
li.push_back(1003);
for(int i:li){
    cout<<i <<endl;**/
//by using the emp,lace back function
/**list<int>li={98,97,87,76};
li.emplace_back(200);
li.emplace_front(299);
for(int num:li){
    cout<<num<<endl;
}**/

//acsessing the elememnts in thge list
/**list<int>li={46,7,98,65};
cout<<li.front()<<" "<<endl;  //
cout<<li.back();**/

//removing the elements from the list
/**list<int>newlist={76,97,87,98,8};
newlist.pop_back();
newlist.pop_front();
newlist.pop_front();
for(int i:newlist){
    cout<<i <<endl;  
}  **/

//sorting the list
/**list<int>li={87,45,87,98};
li.sort();
for(int i :li){
    cout<<i<<endl;   
}
**/
/**list<int>newli={98,465,2836,347};
newli.sort();
for(int i:newli){
    cout<<i <<endl;

}**/

//reversing the list
/**list<int>li={374,57,76,647};
li.reverse();  //reverse the list
for(int i :li){
    cout<<i <<endl;
}**/

//checking the size of the list
/**list<int>li={57,98,29};
cout<<li.size(); //checking the list
cout<<(li.empty()?"yes":"no");  **/

}