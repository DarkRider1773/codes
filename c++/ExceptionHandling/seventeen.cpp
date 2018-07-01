//divide by zero
#include<iostream>
using namespace std;
void divide(double a, double b){
  try{
    if(!b)throw b;
    cout<<"Result : "<<a/b<<"\n";
  }catch(double b){
    cout<<"Can't divide by zero.\n";
  }
}
int main(){
  double a,b;
  do{
    cout<<"Enter numerator (0 to stop)\n";
    cin>>a;
    cout<<"Enter denominator\n";
    cin>>b;
    divide(a,b);
  }while(a!=0);
  return 0;
}
