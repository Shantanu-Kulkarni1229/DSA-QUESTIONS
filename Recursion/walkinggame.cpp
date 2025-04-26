#include<iostream>

using namespace std;


void reachHome(int src , int dest)
{
    //base case
    if(src == dest){
        cout << "Reached home" << endl;
        return;
    }

    //processing
    if(src < dest){
        cout << "Going right" << endl;
        reachHome(src+1, dest);
    }else{
        cout << "Going left" << endl;
        reachHome(src-1, dest);
    }
}

int main () {
    int dest = 5;
    int src =10;

    reachHome(src, dest);

    return 0;
}