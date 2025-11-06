#include <iostream>
using namespace std;
int main() {

int n;
cout<<"enter your number: ";
cin>>n;
// char ch='A';
char ch='A';
for(int i=0; i<n; i++){
    for(int j=i+1;j>0;j--){
        cout<< ch ;

        ch++;

    }
    
    cout<<endl;
}


return 0;

}
