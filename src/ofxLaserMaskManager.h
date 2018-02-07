//
//  ofxLaserMaskM.h
//  LightningStrikesAberdeen
//
//  Created by Seb Lee-Delisle on 02/02/2018.
//


#pragma once
#include "ofMain.h"
#include "ofxLaserQuadMask.h"

namespace ofxLaser {
    
class MaskManager {
    
public:
    
    MaskManager();
    ~MaskManager();
    
    void init(int width, int height);
    bool update();
    bool draw(bool showBitmap = false); 
    ofPixels* getPixels();
    float getBrightness(int x, int y);
    bool loadSettings();
    bool saveSettings();
    
    QuadMask& addQuadMask();
    
    vector<QuadMask*> quads;
    
    ofFbo fbo;
    ofPixels pixels;
    
    protected :
    bool dirty;
    bool firstUpdate = true; 
    
};
}