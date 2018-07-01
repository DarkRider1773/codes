#include<iostream>
using namespace std;
class CanGoWrong{
public:
  CanGoWrong(){
    cout<<"Inside contructor"<<endl;
    char *a=new char[999999999999999999];
    delete[] a;
  }
};
int main(){
  try{
  CanGoWrong c;
}catch(bad_alloc &e){
  cout<<e.what();
}
cout<<endl<<"still running"<<endl;
  return 0;
}
