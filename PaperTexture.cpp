////////////////////////////
/////Project Name: Deep Submergence
/////08.01.2017
/////Written by Soonpart
/////soonpart@gmail.com
////////////////////////////

#include "PaperTexture.hpp"

PaperTexture::PaperTexture()
{
    starRadius = ofGetHeight() * 0.48;
    
    pA = ofPoint(starRadius * sin(PI+TWO_PI*1/5), starRadius * cos(PI+TWO_PI*1/5));
    pB = ofPoint(starRadius * sin(PI+TWO_PI*2/5), starRadius * cos(PI+TWO_PI*2/5));
    pC = ofPoint(starRadius * sin(PI+TWO_PI*3/5), starRadius * cos(PI+TWO_PI*3/5));
    pD = ofPoint(starRadius * sin(PI+TWO_PI*4/5), starRadius * cos(PI+TWO_PI*4/5));
    pE = ofPoint(starRadius * sin(PI+TWO_PI*5/5), starRadius * cos(PI+TWO_PI*5/5)); //top
}

void PaperTexture::display(float fadeoutSpeed)
{
    ofSetColor(brightness, fadeoutSpeed);
    ofFill();
    ofDrawRectangle(0, 0, ofGetWindowWidth(), ofGetHeight());
    
    ofSetColor(0, 5);
    ofNoFill();
    ofSetLineWidth(3);
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()* 0.54);
    
    ofBeginShape();
    ofVertex(pA);
    ofVertex(pB);
    ofVertex(pC);
    ofVertex(pD);
    ofVertex(pE); //top
    ofEndShape(true);
    
    ofBeginShape();
    ofVertex(pA);
    ofVertex(pC);
    ofVertex(pE);
    ofVertex(pB);
    ofVertex(pD);
    ofEndShape(true);
    
    ofPopMatrix();
}

//PaperTexture::PaperTexture()
//{
//    numStrings = 1000;
//    ofBackground(80, 50, 35);
//    for (int i = 0; i<numStrings; i++)
//    {
//        backX.push_back(ofRandomWidth());
//        backY.push_back(ofRandomHeight());
//        stringColor.push_back(ofRandom(80, 100));
//        length.push_back(ofRandom(50, 100));
//    }
//}
//
//void PaperTexture::display(float fadeoutSpeed)
//{
//    ofSetColor(80, 50, 35, fadeoutSpeed);
//    ofFill();
//    ofDrawRectangle(0, 0, ofGetWindowWidth(), ofGetHeight());
//    for (int i = 0; i<numStrings; i++)
//    {
//        ofSetColor(stringColor[i], stringColor[i]-30, stringColor[i]-30, fadeoutSpeed);
//        ofDrawLine(backX[i] - length[i], backY[i], backX[i] + length[i], backY[i]);
//        ofDrawLine(backX[i], backY[i] - length[i], backX[i], backY[i] + length[i]);
//    }
//}

//PaperTexture::PaperTexture()
//{
//    numStrings = 1000;
//    ofBackground(255, 255, 240);
//    for (int i = 0; i<numStrings; i++)
//    {
//        backX.push_back(ofRandomWidth());
//        backY.push_back(ofRandomHeight());
//        stringColor.push_back(ofRandom(240, 255));
//        length.push_back(ofRandom(50, 100));
//    }
//}
//
//void PaperTexture::display(float fadeoutSpeed)
//{
//    ofSetColor(255, 255, 240, fadeoutSpeed);
//    ofFill();
//    ofDrawRectangle(0, 0, ofGetWindowWidth(), ofGetHeight());
//    for (int i = 0; i<numStrings; i++)
//    {
//        ofSetColor(stringColor[i], stringColor[i], stringColor[i]-15, fadeoutSpeed);
//        ofDrawLine(backX[i] - length[i], backY[i], backX[i] + length[i], backY[i]);
//        ofDrawLine(backX[i], backY[i] - length[i], backX[i], backY[i] + length[i]);
//    }
//}
