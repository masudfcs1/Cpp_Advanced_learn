/*
 * Exception_02.cpp
 *
 *  Created on: Dec 24, 2019
 *      Author: MASUD RANA
 */

#include<bits/stdc++.h>
#include<exception>
using namespace std;

class MyException: public exception
{
  public:
      virtual const char* what() const throw()
      {
          //what (virtual)=Get string identifying exception ( public member function )
        
          return "Something bad happened";
      }
};
class Test {
 public:
     void goesWrong(){
      throw MyException();
     }
};

int main()
{
    Test test;
    try{
    test.goesWrong();
    }
    catch(MyException &e){
      cout<<e.what()<<endl;
    }
}
