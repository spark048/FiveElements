#pragma once

#include "ofMain.h"
#include "Wood.hpp"
#include "Fire.hpp"
#include "Water.hpp"
#include "Metal.hpp"
#include "Earth.hpp"
#include "PaperTexture.hpp"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void enhance();
    void diminish();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    Wood wood;
    Fire fire;
    Water water;
    Metal metal;
    Earth earth;
    PaperTexture background;
    
    vector <Wood> woods;
    vector <Fire> fires;
    vector <Water> waters;
    vector <Metal> metals;
    vector <Earth> earths;
    float sizeGap, accelerationGap;
    ofPoint pA, pB, pC, pD,pE;
    float starRadius;
    float metalWater, waterWood, woodFire, fireEarth, earthMetal, metalWood, waterFire, woodEarth, fireMetal, earthWater;
};
