#include<iostream>
using namespace std;

int main(){
    int c=0;
   cout<<"hello cat!"<<endl;
   for(int i=0;i<100000;i++){
     
     for (int j=0;j<10000;j++)
         c++;

   }
     
   cout << c<< endl;
    return 0;
}