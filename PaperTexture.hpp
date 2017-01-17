////////////////////////////
/////Project Name: Deep Submergence
/////08.01.2017
/////Written by Soonpart
/////soonpart@gmail.com
////////////////////////////

#pragma once
#include "ofMain.h"

class PaperTexture
{
public:
    PaperTexture();
    
    void display(float fadeoutSpeed);
    
    vector <float> backX;
    vector <float> backY;
    vector  <float> stringColor;
    vector <float> length;
    int numStrings;
    ofImage backgroundImage;
    ofPoint pA, pB, pC, pD,pE;
    float starRadius, brightness;
};
