#include <iostream>
using namespace std;

int main(){
    int num= 12;
    int sum= 0;
    while(num<=50)
    {
        sum += num;
        num = num+2;

    }
    cout<<"Sum is: "<<sum;
    return 0;

}