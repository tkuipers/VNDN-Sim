#include<iostream>
#include<WirelessNode.h>

using namespace std;

int main(int argc, char* argv[]){
    WirelessNode node = WirelessNode(1, 2, 3);
    WirelessNode node1 = WirelessNode(9, 8, 7, 6, 5, 4);
    cout << node << "\n" << node1 << endl;
    return 0;
}