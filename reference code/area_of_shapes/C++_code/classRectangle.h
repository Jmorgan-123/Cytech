//
// Created by Victor Wachira on 04/02/2024.
//


using namespace std;
class Rectangle
{
private:
    double len;
    double wid;

public:
    double getLength() const;
    double getWidth() const;
    double getArea() const;
    double getPerimeter() const;
    void setValues();

    ~Rectangle() = default;
};

//Class definition
double Rectangle::getLength() const
{
    return len;
}

double Rectangle::getWidth() const {
    return wid;
}

double Rectangle::getPerimeter() const {
    return(2*(len+wid));
}

double Rectangle::getArea() const {
    return(len*wid);
}

void Rectangle::setValues() {
    double length;
    double width;
    cout<<"Enter the length"<<endl;
    cin>>length;
    cout<<"Enter the width: "<<endl;
    cin>>width;
    len= length;
    wid=width;

}

