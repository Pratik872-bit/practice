#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int>st; //declaring the stack
    st.push(40);  //pushing the elements in the stack
    st.push(50);
    st.push(39);
    st.push(19);
//accsesing the first elements
//cout<<st.top(); //19

//removing the top elements
st.pop(); //remove the element
cout<<st.top(); //39
cout<<st.size(); //checking the size


}