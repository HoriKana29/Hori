#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.\n";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int r = rand()%9;
    if(r==0) cout << "You will get A in this 261102.";
    else if(r==1) cout << "You will get B in this 261102.";
    else if(r==2) cout << "You will get B+ in this 261102.";
    else if(r==3) cout << "You will get C in this 261102.";
    else if(r==4) cout << "You will get C+ in this 261102.";
    else if(r==5) cout << "You will get D in this 261102.";
    else if(r==6) cout << "You will get D+ in this 261102.";
    else if(r==7) cout << "You will get F in this 261102.";
    else cout << "You will get W in this 261102.";
    
    
}
