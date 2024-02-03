//C++ program for calculating perimeter and area of rectangle

#include<iostream>
using namespace std;
class rectangle{
        int length,width;
        public:
              int perimeter(int length ,int width);
              int area(int length ,int width);
              };
int rectangle::perimeter(int length,int width){
             int p=((2)*(length+width));
             return p;
             }
int rectangle::area(int length,int width){
             int a=(length*width);
             return a;
             }
int main(){
          rectangle length,width;
          int l,w;
          cout<<"length"<<end l;
          cin>>length;
          cout<<"width"<<end l;
          cin>>width;
          l.perimeter(length,width);
          w.area(length,width);
          cout<<l.perimeter(length,width)<<end l;
          cout<<w.area(length,width)<<end l;
          return 0;
          }
