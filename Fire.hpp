#pragma once
#include "ofMain.h"
#include "Element.hpp"

class Fire
{
public:
    Fire();
    
    void setup();
    void update();
    void draw();
    
    ofPoint location;
    ofPoint velocity;
    ofPoint aim;
    ofColor colorYin;
    ofColor colorYang;
    float size, angle, acceleration, noiseSeed;
    
    Element fire;
};
