//
// Created by Victor Wachira on 05/02/2024.
//

#ifndef APT1030_SS24_CLASSTRIANGLE_H
#define APT1030_SS24_CLASSTRIANGLE_H


class ClassTriangle {
private:
    double b;
    double h;

public:
    double getBase() const;
    double getHeight() const;
    double getArea() const;
    void setValues();
    ~ClassTriangle() = default;
};

double ClassTriangle::getBase() const{
    return b;
}

double ClassTriangle::getHeight() const {
    return h;
}

double ClassTriangle::getArea() const {
    return((1/2.0)*b*h);
}

void ClassTriangle::setValues() {
    double base;
    double height;
    cout<<"Enter the base length: "<<endl;
    cin>>base;
    cout<<"Enter the height: "<<endl;
    cin>>height;
    b=base;
    h=height;
}

#endif //APT1030_SS24_CLASSTRIANGLE_H
