#include<iostream>
using namespace std;

void tower_of_hanoi(int disk, char fromRod, char toRod, char auxRod){
    if(disk == 1){
       cout << "Move disk 1 from rod " << fromRod << " to rod " << toRod << endl;
       return;
    }

    tower_of_hanoi(disk-1,fromRod, auxRod, toRod);
    cout << "Move disk " << disk << " from rod " << fromRod << " to rod " << toRod << endl;
    tower_of_hanoi(disk-1,auxRod, toRod, fromRod);

}
int main(){
    int disk;
    cout << "Enter number of disk:  ";
    cin >> disk;
    tower_of_hanoi(disk,'A','C','B');
    return 0;
}