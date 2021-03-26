//
// Created by administrator on 2021-03-25.
//

#include "WirelessNode.h"

WirelessNode::WirelessNode(long x, long y, long z){
    setVals(x, y, z, 0, 0, 0);
    id = reinterpret_cast<uint64_t>(this);
}

WirelessNode::WirelessNode(long x, long y, long z, long xVal, long yVal, long zVal){
    setVals(x, y, z, xVal, yVal, zVal);
}

void WirelessNode::setX (long val) {
    x = val;
}

void WirelessNode::setY(long val){
    y = val;
}

void WirelessNode::setZ(long val){
    z = val;
}

void WirelessNode::setXVel(long val){
    xVel = val;
}

void WirelessNode::setYVel(long val){
    yVel = val;
}

void WirelessNode::setZVel(long val){
    zVel = val;
}

long WirelessNode::X() const {
    return x;
}

long WirelessNode::Y() const{
    return y;
}

long WirelessNode::Z() const{
    return z;
}

long WirelessNode::XVel() const{
    return xVel;
}

long WirelessNode::YVel() const{
    return yVel;
}

long WirelessNode::ZVel() const{
    return zVel;
}


void WirelessNode::setPosition(long x, long y, long z){
    setX(x);
    setY(y);
    setZ(z);
}

void WirelessNode::setVelocity(long xVel, long yVel, long zVel){
    setXVel(xVel);
    setYVel(yVel);
    setZVel(zVel);
}

void WirelessNode::setVals(long x, long y, long z, long xVal, long yVal, long zVal){
    setPosition(x, y, z);
    setVelocity(xVal, yVal, zVal);
}

std::ostream& operator<<(std::ostream &strm, const WirelessNode & node) {
    return strm << "WirelessNode(ID: " << node.id << " x: " << node.x << " y: " << node.y << " z: " << node.z << " xVel: " << node.xVel << " yVel: " << node.yVel <<  " zVel: " << node.zVel << ")";
}
