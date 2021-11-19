#include <iostream>
using namespace std;

int main(){
    int num;
    int sum;
    do
    {
        cout<<"Enter your numbers. Enter 0 to stop:\n";
        cin>>num; 
        sum += num;

    } while (num!= 0);
    cout<<"Sum is: "<<sum;
    return 0;

}