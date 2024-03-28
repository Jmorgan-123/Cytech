#include <iostream>
#include "classRectangle.h"
#include "classCircle.h"
#include "ClassTriangle.h"
#include "classSquare.h"
using namespace std;

int main() {
    //
    int choice=0;
    int enterChoice=0;
    cout<<"Would you like to calculate area of shapes: "<<endl;
    cout<<"1. yes.\n2. no\n"<<endl;
    cin>>choice;

    while (choice==1) {
        cout<<"To calculate area of shape, choose the shape number below:"<<endl;
        cout<<"1. Circle.\n2. Rectangle\n3. triangle\n4. Square"<<endl;
        cin>>enterChoice;
        if (enterChoice==2) {

            cout << "Rectangle1" << endl;
            Rectangle rectangle1{};
            rectangle1.setValues();
            cout << "Length:\t" << rectangle1.getLength() << endl;
            cout << "Width:\t" << rectangle1.getWidth() << endl;
            cout << "Perimeter:\t" << rectangle1.getPerimeter() << endl;
            cout << "Area:\t" << rectangle1.getArea()<<" Square units" << endl << endl;


        }

        else if (enterChoice==1) {
            //creating first circle and applying member functions
            cout << "Circle 1:" << endl;
            classCircle circle1{};
            circle1.setRadius();
            classCircle circle2{};
            cout<<"Circle 2"<<endl;
            circle2.setRadius();
            cout << "Radius: " << circle1.getRadius() << endl;
            cout << "Area: " << circle1.getArea() <<" Square units."<< endl;
            cout << "Perimeter: " << circle1.getPerimeter() << endl << endl;


            cout << "Radius: " << circle2.getRadius() << endl;
            cout << "Area: " << circle2.getArea()<<"Square units" << endl;
            cout << "Perimeter: " << circle2.getPerimeter() << endl << endl;
        }

        else if(enterChoice==3){
            ClassTriangle triangle1{};
            triangle1.setValues();
            cout<<"Triangle 1"<<endl;
            cout<<"Height:\t"<<triangle1.getHeight()<<endl;
            cout<<"Base:\t"<<triangle1.getBase()<<endl;
            cout<<"Area:\t"<<triangle1.getArea()<<endl<<endl;
        }

        else if(enterChoice==4){
            Square square1{};
            square1.setValues();
            cout<<"Side: "<<square1.getSide()<<endl;
            cout<<"Area: "<<square1.getArea()<<endl;
            cout<<"Perimeter: "<<square1.getPerimeter()<<endl<<endl;


        }
        cout<<"Would you like to continue: "<<endl;
        cout<<"1. yes\n2. no"<<endl<<endl;
        cin>>choice;

    }

    return 0;
}
