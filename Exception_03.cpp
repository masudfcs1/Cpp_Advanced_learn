/*
 * Exception_03.cpp
 *
 *  Created on: Dec 24, 2019
 *      Author: MASUD RANA
 */

#include<iostream>
#include<exception>

using namespace std;
void goesWrong()
{
    bool error1Delete=true;
    bool error2Delete=false;

    if(error1Delete){
        throw bad_alloc();
    }
    if(error2Delete){
        throw exception();
    }
}

int main()
{
    try{
    goesWrong();
    }
    catch(exception &e){
     cout<<"Catching exception"<<e.what()<<endl;
    }
    catch(bad_alloc &e)
    {
        cout<<"Catching bad_alloc:"<<e.what()<<endl;
    }

    return 0;
}
