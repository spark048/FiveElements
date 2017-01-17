#pragma once
#include "ofMain.h"
#include "Element.hpp"

class Wood
{
public:
    Wood();
    
    void setup();
    void update();
    void draw();
    
    ofPoint location;
    ofPoint velocity;
    ofColor colorYin;
    ofColor colorYang;
    float size, angle, acceleration, noiseSeed;
    
    Element wood;
};
