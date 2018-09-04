#ifndef CONE_H
#define CONE_H


class Cone
{
private:
    double _radius;
    double _height;

public:
    Cone(double radius = 0, double reight = 0);
    ~Cone();

    double getRadius() const;
    void setRadius(double getRadius);

    double getHeight() const;
    void setHeight(double getHeight);

    void setVolume(double volume);
    double getVolume() const;

    void print_val() const;

    void printAddressOfThisObject();

private:
    double getArea() const;
    bool checkInputData(double value) const;

};

#endif // CONE_H
