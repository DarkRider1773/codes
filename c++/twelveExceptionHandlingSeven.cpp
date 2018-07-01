//creating a MyException class by inheriting exception class
#include<iostream>
using namespace std;
class MyException:public exception{
public:
const char * what () const throw () {
   return "Exception is caught";
}
};
class Test{
public:
  Test(){
    throw MyException();
  }
};

int main(){
  try{
  Test t;
}catch(MyException &e){
  cout<<e.what();
}
  cout<<endl<<"still running"<<endl;
  return 0;
}
