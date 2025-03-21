#include <iostream>
#include <queue>
using namespace std;
int main(){
queue<int>q;
q.push(20);
q.push(54);
q.push(200);
q.push(100);
//acsessing the front element
//cout<<q.front()<<endl;
//cout<<q.back();
//removing the element from first
q.pop();
cout<<q.front();

//checking the queue size
cout<<q.size();



}