#include <iostream>
using namespace std;
 void rubikCube(int sticker)
 {
    int side=6*sticker*sticker;
    cout<<"Number of stickers needed: "<<side;
 }
 main()
 {
    int length;
    cout<<"Enter the side lenght of rubik's cube: ";
    cin>>length;
    rubikCube(length);
 }

 