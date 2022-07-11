#include <iostream>
#include <fstream>
#include <cstdarg>
using namespace std;

int Average(int n,...){
    va_list list;

    va_start(list,n); /// initialize the position of the list.

    double avg=0;

    for(int i=0;i<n;i++){
        avg+=static_cast<double> (va_arg(list,int))/n; /// va_arg(what list, what is the type of data getting passed into the list);
        cout<<avg<<endl;
    }

    va_end(list);
    return avg;
}

int main(){

    cout<<Average(5,1,2,3,4,5);
    /// printf and scanf in c uses ellipsis for handling multiple number of arguments.

}