#include <iostream>
using namespace std;
int main() {

int number;
cout<<"enter your numbers ";
cin>>number;
int sum=0;
for(int i=1;i<=number;i++){
    if(i%2!=0){
        cout<<i<<"+";
        sum=sum+i;
    }
}

cout<<"the sum is "<<sum <<endl;
    return 0;

}
