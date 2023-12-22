#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));
    int count = 1 ;
    string grade[9] = {"A","B+","B","C+","C","D+","D","F","w"};
    cout << "Press Enter 3 times to reveal your future.";
    do{
    cin.get();
    count++;
    }while(count <= 3);
    int x = rand() % 9 ;
    cout << "you will get " << grade[x] << " in this 261102.";

    return 0;   
}