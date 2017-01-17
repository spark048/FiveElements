#include "Water.hpp"

Water::Water()
{
    location = ofPoint(ofGetWidth() * 0.2, ofRandom(ofGetHeight()));
    velocity = ofPoint(1, 0);
    colorYin = ofColor(105, 90, 95);
    colorYang = ofColor(170, 155, 165);
    acceleration = 1;
    size = 40;
    noiseSeedX = ofRandom(1000);
    noiseSeedY = ofRandom(1000);
}

void Water::update()
{
    if(location.x < 0) location.x = ofGetWidth();
    if(location.x > ofGetWidth()) location.x = 0;
    location.x += velocity.x * acceleration;
    location.y = ofGetHeight() * (0.5 + 0.3 * sin(ofDegToRad(angle)));
    angle += acceleration;

//    location.x = ofMap(ofNoise(noiseSeedX), 0, 1, -ofGetWidth(), ofGetWidth()*2);
//    location.y = ofMap(ofNoise(noiseSeedY), 0, 1, -ofGetHeight(), ofGetHeight()*2);
//    noiseSeedX += 0.005 + (0.001 * acceleration);
//    noiseSeedY += 0.005 + (0.001 * acceleration);
    
    if(acceleration<0) acceleration = 0;
}

void Water::draw()
{
    water.display(location, size, colorYin, colorYang);
}
