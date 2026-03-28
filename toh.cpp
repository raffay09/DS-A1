#include<iostream>
using namespace std;

void towerofhanoi(int n , char src, char helper , char dest){
    if(n == 1){
        cout << "Transfer src: " << src << " to dest: " << dest << endl;
        return;
    }

    towerofhanoi(n-1,src,dest,helper);
    cout << "Transfer src: " << src << " to dest: " << dest << endl;
    towerofhanoi(n-1,helper,src,dest);
}

int main(){
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    towerofhanoi(n, 'A', 'B', 'C');
    return 0;
}