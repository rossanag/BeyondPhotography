#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // Load images
    ofxNestedFileLoader loader;
    vector<string> imagePaths = loader.load("Images");
    for(int i = 0; i < imagePaths.size(); i++) {
        ofImage img;
        img.load(imagePaths[i]);
        images.push_back(img);
    }
    imageIndex.set("Image Index", 0, 0, images.size()-1);
    
    screenResolution.x = ofGetWidth();
    screenResolution.y = ofGetHeight();
    
    Effect test;
    test.loadShader("Shaders/test");
    test.addUniform("inputTexture", &images[0]);
    test.addUniform("resolution", &screenResolution);
    test.width = ofGetWidth();
    test.height = ofGetHeight();
    effects.push_back(test);
    
    Effect diagonal;
    diagonal.loadShader("Shaders/diagonal");
    diagonal.addUniform("resolution", &screenResolution);
    diagonal.width = ofGetWidth();
    diagonal.height = ofGetHeight();
    effects.push_back(diagonal);
    
    Effect modulo;
    modulo.loadShader("Shaders/modulo");
    modulo.addUniform("resolution", &screenResolution);
    modulo.width = ofGetWidth();
    modulo.height = ofGetHeight();
    effects.push_back(modulo);
    
    Effect sine;
    sine.loadShader("Shaders/sine");
    sine.addUniform("resolution", &screenResolution);
    sine.width = ofGetWidth();
    sine.height = ofGetHeight();
    effects.push_back(sine);
    
    Effect atan;
    atan.loadShader("Shaders/atan");
    atan.addUniform("resolution", &screenResolution);
    atan.width = ofGetWidth();
    atan.height = ofGetHeight();
    effects.push_back(atan);
    
    Effect cond1;
    cond1.loadShader("Shaders/cond1");
    cond1.addUniform("resolution", &screenResolution);
    cond1.width = ofGetWidth();
    cond1.height = ofGetHeight();
    effects.push_back(cond1);
    
    Effect cond2;
    cond2.loadShader("Shaders/cond2");
    cond2.addUniform("resolution", &screenResolution);
    cond2.width = ofGetWidth();
    cond2.height = ofGetHeight();
    effects.push_back(cond2);
    
    Effect pol1;
    pol1.loadShader("Shaders/pol1");
    pol1.addUniform("resolution", &screenResolution);
    pol1.width = ofGetWidth();
    pol1.height = ofGetHeight();
    effects.push_back(pol1);
    
    Effect spiral;
    spiral.loadShader("Shaders/spiral");
    spiral.addUniform("resolution", &screenResolution);
    spiral.width = ofGetWidth();
    spiral.height = ofGetHeight();
    effects.push_back(spiral);
    
    Effect negative;
    negative.loadShader("Shaders/negative");
    negative.addUniform("resolution", &screenResolution);
    negative.addUniform("inputTexture", &images[0]);
    negative.width = ofGetWidth();
    negative.height = ofGetHeight();
    effects.push_back(negative);
    
    Effect solarize;
    solarize.loadShader("Shaders/solarize");
    solarize.addUniform("resolution", &screenResolution);
    solarize.addUniform("inputTexture", &images[0]);
    solarize.width = ofGetWidth();
    solarize.height = ofGetHeight();
    effects.push_back(solarize);
    
    Effect solarizeFade;
    solarizeFade.loadShader("Shaders/solarizeFade");
    solarizeFade.addUniform("resolution", &screenResolution);
    solarizeFade.addUniform("inputTexture", &images[0]);
    solarizeFade.width = ofGetWidth();
    solarizeFade.height = ofGetHeight();
    effects.push_back(solarizeFade);
    
    Effect blur;
    blur.loadShader("Shaders/blur");
    blur.addUniform("resolution", &screenResolution);
    blur.addUniform("inputTexture", &images[0]);
    blur.width = ofGetWidth();
    blur.height = ofGetHeight();
    effects.push_back(blur);
    
    Effect sharpen;
    sharpen.loadShader("Shaders/sharpen");
    sharpen.addUniform("resolution", &screenResolution);
    sharpen.addUniform("inputTexture", &images[0]);
    sharpen.width = ofGetWidth();
    sharpen.height = ofGetHeight();
    effects.push_back(sharpen);
    
    Effect relief;
    relief.loadShader("Shaders/relief");
    relief.addUniform("resolution", &screenResolution);
    relief.addUniform("inputTexture", &images[0]);
    relief.width = ofGetWidth();
    relief.height = ofGetHeight();
    effects.push_back(relief);
    
    Effect mirrorY;
    mirrorY.loadShader("Shaders/mirrorY");
    mirrorY.addUniform("resolution", &screenResolution);
    mirrorY.addUniform("inputTexture", &images[0]);
    mirrorY.width = ofGetWidth();
    mirrorY.height = ofGetHeight();
    effects.push_back(mirrorY);
    
    Effect rotate90;
    rotate90.loadShader("Shaders/rotate90");
    rotate90.addUniform("resolution", &screenResolution);
    rotate90.addUniform("inputTexture", &images[0]);
    rotate90.width = ofGetWidth();
    rotate90.height = ofGetHeight();
    effects.push_back(rotate90);
    
    Effect stretchX;
    stretchX.loadShader("Shaders/stretchX");
    stretchX.addUniform("resolution", &screenResolution);
    stretchX.addUniform("inputTexture", &images[0]);
    stretchX.width = ofGetWidth();
    stretchX.height = ofGetHeight();
    effects.push_back(stretchX);
    
    Effect shrink;
    shrink.loadShader("Shaders/shrink");
    shrink.addUniform("resolution", &screenResolution);
    shrink.addUniform("inputTexture", &images[0]);
    shrink.width = ofGetWidth();
    shrink.height = ofGetHeight();
    effects.push_back(shrink);
    
    Effect mirrorX;
    mirrorX.loadShader("Shaders/mirrorX");
    mirrorX.addUniform("resolution", &screenResolution);
    mirrorX.addUniform("inputTexture", &images[0]);
    mirrorX.width = ofGetWidth();
    mirrorX.height = ofGetHeight();
    effects.push_back(mirrorX);
    
    Effect mirrorX2;
    mirrorX2.loadShader("Shaders/mirrorX2");
    mirrorX2.addUniform("resolution", &screenResolution);
    mirrorX2.addUniform("inputTexture", &images[0]);
    mirrorX2.width = ofGetWidth();
    mirrorX2.height = ofGetHeight();
    effects.push_back(mirrorX2);
    
    Effect blend;
    blend.loadShader("Shaders/blend");
    blend.addUniform("resolution", &screenResolution);
    blend.addUniform("inputTexture1", &images[0]);
    blend.addUniform("inputTexture2", &images[2]);
    blend.width = ofGetWidth();
    blend.height = ofGetHeight();
    effects.push_back(blend);
    
    Effect blendLinear;
    blendLinear.loadShader("Shaders/blendLinear");
    blendLinear.addUniform("resolution", &screenResolution);
    blendLinear.addUniform("inputTexture1", &images[0]);
    blendLinear.addUniform("inputTexture2", &images[2]);
    blendLinear.width = ofGetWidth();
    blendLinear.height = ofGetHeight();
    effects.push_back(blendLinear);
    
    Effect blendCenter;
    blendCenter.loadShader("Shaders/blendCenter");
    blendCenter.addUniform("resolution", &screenResolution);
    blendCenter.addUniform("inputTexture1", &images[0]);
    blendCenter.addUniform("inputTexture2", &images[2]);
    blendCenter.width = ofGetWidth();
    blendCenter.height = ofGetHeight();
    effects.push_back(blendCenter);
    
    Effect blendBrightness;
    blendBrightness.loadShader("Shaders/blendBrightness");
    blendBrightness.addUniform("resolution", &screenResolution);
    blendBrightness.addUniform("inputTexture1", &images[0]);
    blendBrightness.addUniform("inputTexture2", &images[2]);
    blendBrightness.width = ofGetWidth();
    blendBrightness.height = ofGetHeight();
    effects.push_back(blendBrightness);
    
    Effect blendBrightnessSmooth;
    blendBrightnessSmooth.loadShader("Shaders/blendBrightnessSmooth");
    blendBrightnessSmooth.addUniform("resolution", &screenResolution);
    blendBrightnessSmooth.addUniform("inputTexture1", &images[0]);
    blendBrightnessSmooth.addUniform("inputTexture2", &images[2]);
    blendBrightnessSmooth.width = ofGetWidth();
    blendBrightnessSmooth.height = ofGetHeight();
    effects.push_back(blendBrightnessSmooth);
    
    Effect sinStretch;
    sinStretch.loadShader("Shaders/sinStretch");
    sinStretch.addUniform("resolution", &screenResolution);
    sinStretch.addUniform("inputTexture", &images[0]);
    sinStretch.width = ofGetWidth();
    sinStretch.height = ofGetHeight();
    effects.push_back(sinStretch);
    
    Effect cone;
    cone.loadShader("Shaders/cone");
    cone.addUniform("resolution", &screenResolution);
    cone.addUniform("inputTexture", &images[0]);
    cone.width = ofGetWidth();
    cone.height = ofGetHeight();
    effects.push_back(cone);
    
    Effect shear;
    shear.loadShader("Shaders/shear");
    shear.addUniform("resolution", &screenResolution);
    shear.addUniform("inputTexture", &images[0]);
    shear.width = ofGetWidth();
    shear.height = ofGetHeight();
    effects.push_back(shear);
    
    Effect Bentley;
    Bentley.loadShader("Shaders/Bentley");
    Bentley.addUniform("resolution", &screenResolution);
    Bentley.addUniform("inputTexture", &images[0]);
    Bentley.width = ofGetWidth();
    Bentley.height = ofGetHeight();
    effects.push_back(Bentley);
    
    Effect BentleyRand;
    BentleyRand.loadShader("Shaders/BentleyRand");
    BentleyRand.addUniform("resolution", &screenResolution);
    BentleyRand.addUniform("inputTexture", &images[0]);
    BentleyRand.width = ofGetWidth();
    BentleyRand.height = ofGetHeight();
    effects.push_back(BentleyRand);
    
    Effect Melt;
    Melt.loadShader("Shaders/Melt");
    Melt.addUniform("resolution", &screenResolution);
    Melt.addUniform("inputTexture", &images[0]);
    Melt.width = ofGetWidth();
    Melt.height = ofGetHeight();
    effects.push_back(Melt);
    
    Effect Split;
    Split.loadShader("Shaders/Split");
    Split.addUniform("resolution", &screenResolution);
    Split.addUniform("inputTexture", &images[0]);
    Split.width = ofGetWidth();
    Split.height = ofGetHeight();
    effects.push_back(Split);
    
    Effect IBM;
    IBM.loadShader("Shaders/IBM");
    IBM.addUniform("resolution", &screenResolution);
    IBM.addUniform("inputTexture", &images[0]);
    IBM.width = ofGetWidth();
    IBM.height = ofGetHeight();
    effects.push_back(IBM);
    
    Effect Swirl;
    Swirl.loadShader("Shaders/Swirl");
    Swirl.addUniform("resolution", &screenResolution);
    Swirl.addUniform("inputTexture", &images[0]);
    Swirl.width = ofGetWidth();
    Swirl.height = ofGetHeight();
    effects.push_back(Swirl);
    
    Effect oilPaint;
    oilPaint.loadShader("Shaders/oilPaint");
    oilPaint.addUniform("resolution", &screenResolution);
    oilPaint.addUniform("inputTexture", &images[0]);
    oilPaint.width = ofGetWidth();
    oilPaint.height = ofGetHeight();
    effects.push_back(oilPaint);
    
    Effect CylinderProj;
    CylinderProj.loadShader("Shaders/CylinderProj");
    CylinderProj.addUniform("resolution", &screenResolution);
    CylinderProj.addUniform("inputTexture", &images[0]);
    CylinderProj.width = ofGetWidth();
    CylinderProj.height = ofGetHeight();
    effects.push_back(CylinderProj);
    
    Effect BlockShift;
    BlockShift.loadShader("Shaders/BlockShift");
    BlockShift.addUniform("resolution", &screenResolution);
    BlockShift.addUniform("inputTexture", &images[0]);
    BlockShift.width = ofGetWidth();
    BlockShift.height = ofGetHeight();
    effects.push_back(BlockShift);
    
    Effect warp;
    warp.loadShader("Shaders/warp");
    warp.addUniform("resolution", &screenResolution);
    warp.addUniform("inputTexture1", &images[0]);
    warp.addUniform("inputTexture2", &images[2]);
    warp.width = ofGetWidth();
    warp.height = ofGetHeight();
    effects.push_back(warp);
    
    Effect LSD;
    LSD.loadShader("Shaders/LSD");
    LSD.addUniform("resolution", &screenResolution);
    LSD.addUniform("inputTexture", &images[0]);
    LSD.width = ofGetWidth();
    LSD.height = ofGetHeight();
    effects.push_back(LSD);
    
    Effect stretchXY;
    stretchXY.loadShader("Shaders/stretchXY");
    stretchXY.addUniform("resolution", &screenResolution);
    stretchXY.addUniform("inputTexture", &images[0]);
    stretchXY.width = ofGetWidth();
    stretchXY.height = ofGetHeight();
    effects.push_back(stretchXY);
    
    Effect glassVertical;
    glassVertical.loadShader("Shaders/glassVertical");
    glassVertical.addUniform("resolution", &screenResolution);
    glassVertical.addUniform("inputTexture", &images[0]);
    glassVertical.width = ofGetWidth();
    glassVertical.height = ofGetHeight();
    effects.push_back(glassVertical);
    
    Effect glassSpiral;
    glassSpiral.loadShader("Shaders/glassSpiral");
    glassSpiral.addUniform("resolution", &screenResolution);
    glassSpiral.addUniform("inputTexture", &images[0]);
    glassSpiral.width = ofGetWidth();
    glassSpiral.height = ofGetHeight();
    effects.push_back(glassSpiral);
    
    Effect fishEye;
    fishEye.loadShader("Shaders/fishEye");
    fishEye.addUniform("resolution", &screenResolution);
    fishEye.addUniform("inputTexture", &images[0]);
    fishEye.width = ofGetWidth();
    fishEye.height = ofGetHeight();
    effects.push_back(fishEye);
    
    Effect randomPixels;
    randomPixels.loadShader("Shaders/randomPixels");
    randomPixels.addUniform("resolution", &screenResolution);
    randomPixels.addUniform("inputTexture", &images[0]);
    randomPixels.width = ofGetWidth();
    randomPixels.height = ofGetHeight();
    effects.push_back(randomPixels);
    
    Effect pixelate;
    pixelate.loadShader("Shaders/pixelate");
    pixelate.addUniform("resolution", &screenResolution);
    pixelate.addUniform("inputTexture", &images[0]);
    pixelate.width = ofGetWidth();
    pixelate.height = ofGetHeight();
    effects.push_back(pixelate);
    
    Effect weave;
    weave.loadShader("Shaders/weave");
    weave.addUniform("resolution", &screenResolution);
    weave.addUniform("inputTexture", &images[0]);
    weave.width = ofGetWidth();
    weave.height = ofGetHeight();
    effects.push_back(weave);
    
    Effect tileFlip;
    tileFlip.loadShader("Shaders/tileFlip");
    tileFlip.addUniform("resolution", &screenResolution);
    tileFlip.addUniform("inputTexture", &images[0]);
    tileFlip.width = ofGetWidth();
    tileFlip.height = ofGetHeight();
    effects.push_back(tileFlip);
    
    Effect tileExplode;
    tileExplode.loadShader("Shaders/tileExplode");
    tileExplode.addUniform("resolution", &screenResolution);
    tileExplode.addUniform("inputTexture", &images[0]);
    tileExplode.width = ofGetWidth();
    tileExplode.height = ofGetHeight();
    effects.push_back(tileExplode);
    
    Effect gridExplode;
    gridExplode.loadShader("Shaders/gridExplode");
    gridExplode.addUniform("resolution", &screenResolution);
    gridExplode.addUniform("inputTexture", &images[0]);
    gridExplode.width = ofGetWidth();
    gridExplode.height = ofGetHeight();
    effects.push_back(gridExplode);
    
    Effect thresholdRGB;
    thresholdRGB.loadShader("Shaders/thresholdRGB");
    thresholdRGB.addUniform("resolution", &screenResolution);
    thresholdRGB.addUniform("inputTexture", &images[0]);
    thresholdRGB.width = ofGetWidth();
    thresholdRGB.height = ofGetHeight();
    effects.push_back(thresholdRGB);
    
    Effect thresholdRGBSoft;
    thresholdRGBSoft.loadShader("Shaders/thresholdRGBSoft");
    thresholdRGBSoft.addUniform("resolution", &screenResolution);
    thresholdRGBSoft.addUniform("inputTexture", &images[0]);
    thresholdRGBSoft.width = ofGetWidth();
    thresholdRGBSoft.height = ofGetHeight();
    effects.push_back(thresholdRGBSoft);
    
    string settingsPath = "settings/settings.xml";
    gui.setup("Effects", settingsPath);
    gui.add(imageIndex);
    gui.add(effectIndex.set("Effect Index", 0, 0, effects.size()-1));
    gui.loadFromFile(settingsPath);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
//    for(int i = 0; i < effects.size(); i++) {
//        if(
//    }
    effects[effectIndex].applyEffect();
    ofDrawBitmapStringHighlight(effects[effectIndex].name, gui.getPosition().x + 5, gui.getPosition().y + gui.getHeight() + 15);
    gui.draw();
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
    screenResolution.x = w;
    screenResolution.y = h;
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
