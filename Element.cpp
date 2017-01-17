#include "Element.hpp"

Element::Element(){}

void Element::display(ofPoint location, float size, ofColor colorYin, ofColor colorYang)
{    
    ofPushMatrix();
    ofTranslate(location);
    ofPushMatrix();
    ofRotate(angle);
    ofNoFill();
    ofSetLineWidth(2);
    
    int radius = size;
    int circleResolution = 200;
    
    ofSetColor(colorYang);
    ofBeginShape();
    for (int i=0; i<circleResolution; i++)
    {
        float angle = PI / circleResolution*i;
        float endX = sin(angle) * radius;
        float endY = cos(angle) * radius;
        ofVertex(endX, endY);
    }
    ofEndShape();
    
    ofSetColor(colorYin);
    ofBeginShape();
    for (int i=0; i<circleResolution; i++)
    {
        float angle = -PI / circleResolution*i;
        float endX = sin(angle) * radius;
        float endY = cos(angle) * radius;
        ofVertex(endX, endY);
    }
    ofEndShape();
    
    ofPushMatrix();
    ofTranslate(-2, radius/2);
    ofSetColor(colorYin);
    ofBeginShape();
    for (int i=0; i<circleResolution; i++)
    {
        float angle = -PI / circleResolution*i;
        float endX = sin(angle) * radius/2;
        float endY = cos(angle) * radius/2;
        ofVertex(endX, endY);
    }
    ofEndShape();
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(2, -radius/2);
    ofSetColor(colorYang);
    ofBeginShape();
    for (int i=0; i<circleResolution; i++)
    {
        float angle = PI / circleResolution*i;
        float endX = sin(angle) * radius/2;
        float endY = cos(angle) * radius/2;
        ofVertex(endX, endY);
    }
    ofEndShape();
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(0, radius/2);
    ofSetColor(colorYang);
    ofBeginShape();
    for (int i=0; i<circleResolution; i++)
    {
        float angle = -PI / circleResolution*i;
        float endX = sin(angle) * radius/2;
        float endY = cos(angle) * radius/2;
        ofVertex(endX, endY);
    }
    ofEndShape();
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(0, -radius/2);
    ofSetColor(colorYin);
    ofBeginShape();
    for (int i=0; i<circleResolution; i++)
    {
        float angle = PI / circleResolution*i;
        float endX = sin(angle) * radius/2;
        float endY = cos(angle) * radius/2;
        ofVertex(endX, endY);
    }
    ofEndShape();
    ofPopMatrix();
    
    ofPopMatrix();
    ofPopMatrix();

    
    
//    int radius = size;
//    int circleResolution = 200;
//    ofFill();
//    
//    ofPushMatrix();
//    ofTranslate(location);
//    ofRotate(angle);
//    
//    ofSetColor(colorYin);
//    ofBeginShape();
//    for (int i=0; i<circleResolution; i++)
//    {
//        float angle = -PI / circleResolution*i;
//        float endX = sin(angle) * radius;
//        float endY = cos(angle) * radius;
//        ofVertex(endX, endY);
//    }
//    for (int i=0; i<circleResolution; i++)
//    {
//        float angle = -PI / circleResolution*(circleResolution-i);
//        float endX = sin(angle) * radius/2;
//        float endY = cos(angle) * radius/2 + radius/2;
//        ofVertex(endX, endY);
//    }
//    for (int i=0; i<circleResolution; i++)
//    {
//        float angle = PI / circleResolution*(circleResolution-i);
//        float endX = sin(angle) * radius/2;
//        float endY = cos(angle) * radius/2 - radius/2;
//        ofVertex(endX, endY);
//    }
//    ofEndShape();
//    
//    ofSetColor(colorYang);
//    ofBeginShape();
//    for (int i=0; i<circleResolution; i++)
//    {
//        float angle = PI / circleResolution*i;
//        float endX = sin(angle) * radius;
//        float endY = cos(angle) * radius;
//        ofVertex(endX, endY);
//    }
//    for (int i=0; i<circleResolution; i++)
//    {
//        float angle = PI / circleResolution*(circleResolution-i);
//        float endX = sin(angle) * radius/2;
//        float endY = cos(angle) * radius/2  -radius/2;
//        ofVertex(endX, endY);
//    }
//    for (int i=0; i<circleResolution; i++)
//    {
//        float angle = -PI / circleResolution*(circleResolution-i);
//        float endX = sin(angle) * radius/2;
//        float endY = cos(angle) * radius/2 + radius/2;
//        ofVertex(endX, endY);
//    }
//    ofEndShape();
//    
//    ofPopMatrix();

    angle++;
}
