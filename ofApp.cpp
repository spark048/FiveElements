#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetBackgroundAuto(false);
    ofEnableAntiAliasing();
    
    sizeGap = 0.3;
    accelerationGap = 0.01;
    
    starRadius = ofGetHeight() * 0.48;
    
    pA = ofPoint(starRadius * sin(PI+TWO_PI*1/5), starRadius * cos(PI+TWO_PI*1/5));
    pB = ofPoint(starRadius * sin(PI+TWO_PI*2/5), starRadius * cos(PI+TWO_PI*2/5));
    pC = ofPoint(starRadius * sin(PI+TWO_PI*3/5), starRadius * cos(PI+TWO_PI*3/5));
    pD = ofPoint(starRadius * sin(PI+TWO_PI*4/5), starRadius * cos(PI+TWO_PI*4/5));
    pE = ofPoint(starRadius * sin(PI+TWO_PI*5/5), starRadius * cos(PI+TWO_PI*5/5)); //top
}

//--------------------------------------------------------------
void ofApp::update()
{
    fire.update();
    wood.update();
    water.update();
    metal.update();
    earth.update();
    
    enhance();
    diminish();
    
    background.brightness = (metalWater + waterWood + woodFire + fireEarth + earthMetal + metalWood + waterFire + woodEarth + fireMetal + earthWater) * 0.1;
}

//--------------------------------------------------------------
void ofApp::draw()
{
    background.display(30);
    
    ofNoFill();
    ofSetLineWidth(3);
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()* 0.54);
    
    ofSetColor(ofRandom(200), metalWater);
    ofDrawLine(pA, pB);
    ofSetColor(ofRandom(200), earthMetal);
    ofDrawLine(pB, pC);
    ofSetColor(ofRandom(200), fireEarth);
    ofDrawLine(pC, pD);
    ofSetColor(ofRandom(200), woodFire);
    ofDrawLine(pD, pE);
    ofSetColor(ofRandom(200), waterWood);
    ofDrawLine(pE, pA);

    ofSetColor(ofRandom(200), earthWater);
    ofDrawLine(pA, pC);
    ofSetColor(ofRandom(200), woodEarth);
    ofDrawLine(pC, pE);
    ofSetColor(ofRandom(200), metalWood);
    ofDrawLine(pE, pB);
    ofSetColor(ofRandom(200), fireMetal);
    ofDrawLine(pB, pD);
    ofSetColor(ofRandom(200), waterFire);
    ofDrawLine(pD, pA);

    ofPopMatrix();

    fire.draw();
    wood.draw();
    water.draw();
    metal.draw();
    earth.draw();
    
    background.brightness = 0;
}

//--------------------------------------------------------------
void ofApp::enhance()
{
    if(fire.size == 0);
    else if(ofDist(wood.location.x, wood.location.y, fire.location.x, fire.location.y) < wood.size + fire.size)
    {
        fire.size += sizeGap;
        fire.acceleration += accelerationGap;
        woodFire = 255;
        if(fire.size < 0) fire.size = 0;
    }
    else woodFire = 0;

    if(water.size == 0);
    else if(ofDist(metal.location.x, metal.location.y, water.location.x, water.location.y) < metal.size + water.size)
    {
        water.size += sizeGap;
        water.acceleration += accelerationGap;
        metalWater = 255;
        if(water.size < 0) water.size = 0;
    }
    else metalWater = 0;
    
    if(earth.size == 0);
    else if(ofDist(fire.location.x, fire.location.y, earth.location.x, earth.location.y) < fire.size + earth.size)
    {
        earth.size += sizeGap;
        earth.acceleration += accelerationGap;
        fireEarth = 255;
        if(earth.size < 0) earth.size = 0;
    }
    else fireEarth = 0;
    
    if(wood.size == 0);
    else if(ofDist(water.location.x, water.location.y, wood.location.x, wood.location.y) < water.size + wood.size)
    {
        wood.size += sizeGap;
        wood.acceleration += accelerationGap;
        waterWood = 255;
        if(wood.size < 0) wood.size = 0;
    }
    else waterWood = 0;
    
    if(metal.size == 0);
    else if(ofDist(earth.location.x, earth.location.y, metal.location.x, metal.location.y) < earth.size + metal.size)
    {
        metal.size += sizeGap;
        metal.acceleration += accelerationGap;
        earthMetal = 255;
        if(metal.size < 0) metal.size = 0;
    }
    else earthMetal = 0;
    
}

//--------------------------------------------------------------
void ofApp::diminish()
{
    if(fire.size == 0);
    else if(ofDist(water.location.x, water.location.y, fire.location.x, fire.location.y) < water.size + fire.size)
    {
        fire.size -= sizeGap;
        fire.acceleration -= accelerationGap;
        waterFire = 255;
        if(fire.size < 0) fire.size = 0;
    }
    else waterFire = 0;

    if(wood.size == 0);
    else if(ofDist(metal.location.x, metal.location.y, wood.location.x, wood.location.y) < metal.size + wood.size)
    {
        wood.size -= sizeGap;
        wood.acceleration -= accelerationGap;
        metalWood = 255;

        if(wood.size < 0) wood.size = 0;
    }
    else metalWood = 0;

    if(earth.size == 0);
    else if(ofDist(wood.location.x, wood.location.y, earth.location.x, earth.location.y) < wood.size + earth.size)
    {
        earth.size -= sizeGap;
        earth.acceleration -= accelerationGap;
        woodEarth = 255;
        if(earth.size < 0) earth.size = 0;
    }
    else woodEarth = 0;

    if(fire.size == 0);
    else if(ofDist(fire.location.x, fire.location.y, metal.location.x, metal.location.y) < fire.size + metal.size)
    {
        metal.size -= sizeGap;
        metal.acceleration -= accelerationGap;
        fireMetal = 255;
        if(metal.size < 0) metal.size = 0;
    }
    else fireMetal = 0;

    if(water.size == 0);
    if(ofDist(earth.location.x, earth.location.y, water.location.x, water.location.y) < earth.size + water.size)
    {
        water.size -= sizeGap;
        water.acceleration -= accelerationGap;
        earthWater = 255;
        if(water.size < 0) water.size = 0;
    }
    else earthWater = 0;
}

























//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
