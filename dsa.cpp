#include <iostream>
using namespace std;

// int count(int n,int p){
//     for (int i=1 ;i<n;i++){
//         if(i%5==0){
//             if(i%2==0){
//                 continue;
//             }
//             cout<<"stop"<<" "<<endl;
//         }
//         cout<<i <<" "<<endl;
//     } cout<<endl;
//     for (int j=1;j<=p;j++){
//         if(j%4==0){
//             continue;
//         }
//         if(j%3==0){
//             cout<<"stop"<<" "<<endl;
//         }
//          cout<<j<< " "<<endl;
//     }

// }
// int main(){
//     count(20,19);

// }

// #include <iostream>
// using namespace std;

// int main(){
// int n=4;
// int sum=0;
// for(int i=1;i<=n;i++){
//     if(n%i==0){
//        sum=sum+i; 
//     }
// } 
// cout<<sum;
// }




// #include <iostream>
// using namespace std;

// int main(){
// int n=4;
// int sum=0;
// for(int i=1;i*i<=n;i++){
//     if(n%i==0){
//        sum++;
//        if(n/i !=i){
//         sum++;
//        } 
//     }

// } 
// if(sum==2){
//     cout<<"true";
  
//  }
//  else{
//     cout<<"False"; 
//  }
// }


// #include <iostream>
// using namespace std;
// int main(){
//    int a=15;
//    int b=10;
//    while(a>0 && b>0){
//      if(a>b){
//       a=a%b;
//      }else{
//       b=b%a;
//      }
      
//    }
//    if(a==0){
//       cout<<b;
//    }else {
//       cout<<a;
//    }
// }

// #include <iostream>
// using namespace std;
//     // Complete this function
//     void printNos(int n) {
//       // Your code here
//      if(n==0)
//      return; 
//      printNos(n-1);
//      cout<<n<<" "; 
// }

// int main(){
//    int num=5;
//    printNos(num);
//    return 0;
// } 




//  long long factorialNumbers(long long n) {
//    // Write Your Code here
//    if(n==0)
//    return 1;
//    long long fact=n*factorialNumbers(n-1);
//    if(fact<n)
//       cout<<n;
//    return fact;
// }
// int main(){
//    long long num=5;
//    factorialNumbers(num);
// }


#include <iostream>
using namespace std;
int reverarr(int l,int r,int arr[]){
   if(l>=r) return;
  swap(arr[l],arr[r]);
   return reverarr(l+1,r-1,arr); 

}
int main(){
   int name[4]={1,2,3,4};
   reverarr(0,4,name);
}


