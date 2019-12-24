/*
 * Exception_01.cpp
 *
 *  Created on: Dec 23, 2019
 *      Author: MASUD RANA
 */

#include<bits/stdc++.h>
using namespace std;

class cangowrong{
 public:
     cangowrong(){
         char *pmemory=new char[999999999999999];
         delete[]pmemory;

     }

};
int main()
{
    try{
    cangowrong wrong;
    }
    catch(bad_alloc &e){
        //bad_alloc = Exception thrown on failure allocating memory(class)
        
        cout<<"Caught exception:"<<e.what()<<endl;
                 //what(virtual)=Get string Identifying exception(public member function)

    }

    cout<<"Still running"<<endl;

    return 0;

}

