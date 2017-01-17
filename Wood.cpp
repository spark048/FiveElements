#include "Wood.hpp"

Wood::Wood()
{
    if(ofRandom(1) < 0.5)
    {
        location = ofPoint(ofGetWidth() * 0.4, ofGetHeight() * ofRandom(0.1, 0.9));
        velocity = ofPoint(0, -3);
    }
    else
    {
        location = ofPoint(ofGetWidth() * 0.6, ofGetHeight() * ofRandom(0.1, 0.9));
        velocity = ofPoint(0, 3);
    }
    acceleration = 1;
    colorYin = ofColor(0, 115, 120);
    colorYang = ofColor(170, 210, 180);
    size = 40;
    noiseSeed = ofRandom(1000);
}

void Wood::update()
{
    if(location.x>ofGetWidth() * 0.6 && location.y<ofGetHeight() * 0.7) velocity = ofPoint(0, 3) * acceleration;
    if(location.y>ofGetHeight() * 0.9 && location.x>ofGetWidth() * 0.3) velocity = ofPoint(-3, 0) * acceleration;
    if(location.x<ofGetWidth() * 0.4 && location.y>ofGetHeight() * 0.3) velocity = ofPoint(0, -3) * acceleration;
    if(location.y<ofGetHeight() * 0.1 && location.x<ofGetWidth() * 0.7) velocity = ofPoint(3, 0) * acceleration;
    location += velocity;
    if(acceleration<0) acceleration = 0;
}

void Wood::draw()
{
    wood.display(location, size, colorYin, colorYang);
}
