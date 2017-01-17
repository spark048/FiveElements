#pragma once
#include "ofMain.h"

class Element
{
public:
    Element();
    
    void display(ofPoint location, float size, ofColor colorYin, ofColor colorYang);

    float angle;
};
