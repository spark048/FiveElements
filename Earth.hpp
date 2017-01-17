#pragma once
#include "ofMain.h"
#include "Element.hpp"

class Earth
{
public:
    Earth();
    
    void setup();
    void update();
    void draw();
    
    ofPoint location;
    ofPoint velocity;
    ofColor colorYin;
    ofColor colorYang;
    float size, angle, acceleration, noiseSeedX, noiseSeedY, noiseSeed;
    
    Element earth;
};
