#include "Earth.hpp"

Earth::Earth()
{
    if(ofRandom(1) < 0.5)
    {
        location = ofPoint(ofGetWidth() * ofRandom(0.1, 0.9), ofGetHeight() * 0.4);
        velocity = ofPoint(3, 0);
    }
    else
    {
        location = ofPoint(ofGetWidth() * ofRandom(0.1, 0.9), ofGetHeight() * 0.6);
        velocity = ofPoint(-3, 0);
    }
    colorYin = ofColor(200, 165, 45);
    colorYang = ofColor(255, 205, 140);
    size = 40;
    acceleration = 1;
    noiseSeedX = ofRandom(1000);
    noiseSeedY = ofRandom(1000);
}

void Earth::update()
{
    if(location.x>ofGetWidth() * 0.9 && location.y<ofGetHeight() * 0.7) velocity = ofPoint(0, 3) * acceleration;
    if(location.y>ofGetHeight() * 0.6 && location.x>ofGetWidth() * 0.3) velocity = ofPoint(-3, 0) * acceleration;
    if(location.x<ofGetWidth() * 0.1 && location.y>ofGetHeight() * 0.3) velocity = ofPoint(0, -3) * acceleration;
    if(location.y<ofGetHeight() * 0.4 && location.x<ofGetWidth() * 0.7) velocity = ofPoint(3, 0) * acceleration;
    location += velocity;
    if(acceleration<0) acceleration = 0;
}

void Earth::draw()
{
    earth.display(location, size, colorYin, colorYang);

//    ofPushMatrix();
//    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
//    earth.display(location, size, colorYin, colorYang);
//    ofPopMatrix();
}
