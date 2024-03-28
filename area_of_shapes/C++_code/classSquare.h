//
// Created by Victor Wachira on 05/02/2024.
//

#include<cmath>
class Square{
private:
    double side{};
public:
    double getSide() const;
    double getPerimeter() const;
    double getArea() const;
    void setValues();

    ~Square()=default;

};

double Square::getSide() const {
    return side;
}

double Square::getArea() const {
    return(pow(side,2));
}

double Square::getPerimeter() const {
    return(4*(side));
}

void Square::setValues() {
    double value;
    cout << "Enter the value for the side of the square: ";
    cin >> value;
    side = value;
}
