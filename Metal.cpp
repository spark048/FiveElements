#include "Metal.hpp"

Metal::Metal()
{
    location = ofPoint(ofGetWidth() * 0.8, ofGetHeight()/2);
    velocity = ofPoint(0, -3);
    colorYin = ofColor(200, 220, 240);
    colorYang = ofColor(235, 250, 250);
    size = 40;
    acceleration = 1;
}

void Metal::update()
{
    location.x = ofGetHeight() * 0.35 * sin(ofDegToRad(-angle)) + ofGetWidth()/2;
    location.y = ofGetHeight() * 0.35 * cos(ofDegToRad(-angle)) + ofGetHeight()/2;
    angle += acceleration;
    if(acceleration<0) acceleration = 0;
}

void Metal::draw()
{
    metal.display(location, size, colorYin, colorYang);
}
