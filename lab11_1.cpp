#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));
    int count = 1;
    string grade[] = {"","A","B+","B","C+","C","D+","D","F","W"};
    cout << "Press Enter 3 times to reveal your future.";
    while(count <= 3){
    cin.get();
    count++;
    }
    int x = rand() % 9 +1 ;
     cout << "you will get " << grade[x] << " in this 261102.";
    return 0;   
}