#include <iostream>
#include <string>
using namespace std;
// using long variable to store CNIC
long long  CNIC=1234567891212;
long long  CNICLastDigit=(CNIC%10);
// using structure to encapsulating data in one unit
       struct Square{
      	double Area;
		double Perimeter;
		double length;
	    void calcAreaSquare(){
	           Area=length*length;
	     }
	   	void calcPeriSquare(){
	       Perimeter=4*length;
	          }
	     void display(){
	    cout<<"The perimeter of a square is "<<Perimeter<<endl;
	    cout<<"The Area of a square is "<<Area<<endl;
	   }	
 };
   struct Hexagon{
   	    double Area;
		double Perimeter;
		double sumofAngles;
		int s;//the length of one side of hexagon
    	   void calcArea(){
			     Area = 1.5 * 1.732 * s ;
		}
	   void	calcPeri(){
		Perimeter=6*s;
	}
       void calcAngleSum(){
       	int sidesofhexagon=6;
       	int Angleofoneside=120;
       	sumofAngles=6*6*Angleofoneside;
	   }
	     void display1(){
	    cout<<"The perimeter of a  Hexagon is "<<Perimeter<<endl;
	    cout<<"The Area of a  Hexagon is "<<Area<<endl;
	    cout<<"The Sum of angles  of a  Hexagon is "<<sumofAngles<<endl;
	    }	
   };
   int main() {
   	   cout<<"Last digit of cnic is "<<  CNICLastDigit<<endl;
       Square square;
       Hexagon hexagon;
       hexagon.s= CNICLastDigit;
       square.length= CNICLastDigit+1;
	// displaying menu
	   int choice;
	   do{
	   cout<<".................................................."<<endl;
	   cout<<"Enter your choice"<<endl;
	   cout<<"1.Press to see the Area and Perimeter of Heaxagon"<<endl;
	   cout<<"2.Press to see the Area and Perimeter of Square"<<endl;
	   cout<<"Press anyother key to exit"<<endl;
	   cout<<".................................................."<<endl;
	   cin>>choice;
	   cout<<".................................................."<<endl;
	   switch(choice){
	   	case 1:
	   hexagon.calcArea();
	   hexagon.calcPeri();
	   hexagon.calcAngleSum();
	   hexagon.display1();
	    	   break;
	   case 2:
	   	 square.calcAreaSquare();
	     square.calcPeriSquare();
	   	   square.display();
	   	   break;
	   	   default:
	   	   cout<<"Exiting the program"<<endl;
	   	    	   break;
	    }
     }
	   while(choice==1||choice==2);

	return 0;
   }
