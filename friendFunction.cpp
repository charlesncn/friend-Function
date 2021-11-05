#include <iostream>
#include <string>
using namespace std;
class Area{
   int length,breadth,area;
 
   public:
 
   Area(int length,int breadth):length(length),breadth(breadth)
   {}
   void calcArea(){
      area = length * breadth;
   }
 
   friend class printClass;
 
};
class printClass{
 
   public:
   void printArea(Area a){
      cout<<"Area = "<<a.area;
   }
 };
int main(){
   Area a(10,15);
   a.calcArea();
   printClass p;
   p.printArea(a);
 
   return 0;
}
