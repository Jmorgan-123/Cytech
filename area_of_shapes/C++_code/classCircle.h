//
// Created by Victor Wachira on 04/02/2024.
//

//#include<iostream>
//using namespace std;


#ifndef APT1030_SS24_CLASSCIRCLE_H
#define APT1030_SS24_CLASSCIRCLE_H


class classCircle {
private:
    double radius;

public:
    double getRadius() const;

    double getArea() const;

    double getPerimeter() const;

    void setRadius();

    ~classCircle()=default;

};
//Members function definition. Each function declaration in the class definition
// section is defined in this section.

//Definition of getRadius member function
double classCircle::getRadius() const
{
    return radius;
}

double classCircle::getArea() const
{
    const double PI=3.142;
    return (PI*radius*radius);
}

double classCircle::getPerimeter() const
{
    const double PI=3.142;
    return(2*PI*radius);
}

void classCircle::setRadius()
{
    double value;
    cout<<"Enter radius: "<<endl;
    cin>>value;
    radius=value;
}


//Application section: Objects are instantiated in this section.
//Objects use members functions to get or set their attributes



#endif //APT1030_SS24_CLASSCIRCLE_H
