#include "Fire.hpp"

Fire::Fire()
{
    location = ofPoint(ofGetWidth()/2, ofGetHeight() * 0.15);
    velocity = ofPoint(0, -3);
    colorYin = ofColor(255, 40, 15);
    colorYang = ofColor(255, 170, 145);
    size = 40;
    acceleration = 1;
}

void Fire::update()
{
    if(location.y<ofGetHeight() * 0.15) velocity = ofPoint(ofGetWidth() * 0.003, ofGetHeight() * 0.005) * acceleration;
    if(location.x>ofGetWidth() * 0.9) velocity = ofPoint(-ofGetWidth() * 0.005, 0) * acceleration;
    if(location.x<ofGetWidth() * 0.1) velocity = ofPoint(ofGetWidth() * 0.003, -ofGetHeight() * 0.005) * acceleration;
    location += velocity;
    if(acceleration<0) acceleration = 0;
}

void Fire::draw()
{
    fire.display(location, size, colorYin, colorYang);
}
