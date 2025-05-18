#include <iostream>
using namespace std;

int main() {

int game;

cout<<"Menu:\n1. play god of war\n2. play the witcher\n3. play GTA V\n4. Exit\n";
cout<<"enter your choice";
cin>>game;

switch(game) { 
    case 1:
    cout<<"starting god of war ";
    break;
    case 2:"starting the witcher ";
    break;
    case 3:"starting GTA V ";
    break;
    default:
    case 4: "invalid choice";
    break;
    
    return 0;
}
}
