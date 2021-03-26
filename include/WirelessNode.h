#ifndef DIRECTORY_TEST_WIRELESSNODE_H
#define DIRECTORY_TEST_WIRELESSNODE_H
#include<iostream>


class WirelessNode {
private:
    long id, radius, x, y, z, xVel, yVel, zVel;
    friend std::ostream& operator<<(std::ostream&, const WirelessNode&);
public:
    WirelessNode(long x, long y, long z);
    WirelessNode(long x, long y, long z, long xVal, long yVal, long zVal);
    void setX(long val);
    void setY(long val);
    void setZ(long val);
    void setXVel(long val);
    void setYVel(long val);
    void setZVel(long val);
    long X() const;
    long Y() const;
    long Z() const;
    long XVel() const;
    long YVel() const;
    long ZVel() const;

    void setPosition(long x, long y, long z);
    void setVelocity(long xVel, long yVel, long zVel);
    void setVals(long x, long y, long z, long xVal, long yVal, long zVal);
};


#endif //DIRECTORY_TEST_WIRELESSNODE_H
