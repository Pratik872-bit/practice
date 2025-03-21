#include <iostream> 
using namespace std;

int main() {
//  Example 1
 int n=10;
int i=1;
int j=1;
for ( i = 1; i<=n; i++){
    for (j = 1; j <=n; j++){
    
        cout<<"*"<<" ";
    }
cout<<endl;
} 

// Example 2
 int n=4;
int i=1;
int j=1;
for ( i = 1; i<=n; i++){
    char ch='A';
    for (j =1; j <=n; j++){
        cout<<ch;
        ch=ch+1;}
        cout<<endl;
    }

// Example 3
// 123
// 456
// 789
int num=1;
 int n=3;
for (int i = 0; i<n; i++){
    
    for (int j = 0; j <n; j++){
        cout<<num;
        num+=1;
        
    }
      cout<<endl;
} 



// Example 4
 int n=10;
int i=1;
int j=1;
char ch='A';
for ( i = 1; i<=n; i++){
    
    for (j =1; j <=n; j++){
        cout<<ch;
        ch=ch+1;}
        cout<<endl;
    }

// Example 5
// triangle star printing 
int n=100;
for (int i = 0; i <n; i++)
{
    for (int j = 0; j<i+1; j++)
    {
        cout<<"*";
    }
   cout<<endl; 
}

// Example 6

int n=5;

for (int i =0; i <n; i++)
{ int num=0;
    for (int j = 0; j<i+1; j++)
    {
        cout<<i<< " ";
        num ++;
    }

    }
   cout<<endl; 

}





