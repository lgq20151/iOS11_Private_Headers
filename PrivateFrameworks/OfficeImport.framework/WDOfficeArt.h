/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDOfficeArt : WDRun {
    OADDrawable * mDrawable;
    bool  mFloating;
    WDCharacterProperties * mProperties;
}

+ (int)textBoxTextTypeForRegularTextType:(int)arg1;

- (void)checkForFloating:(id)arg1;
- (void)clearDrawable;
- (void)clearProperties;
- (void)dealloc;
- (id)description;
- (id)drawable;
- (id)imageBlipRef;
- (id)imageData;
- (id)imageName;
- (id)initWithParagraph:(id)arg1;
- (bool)isDrawableOverridden;
- (bool)isFloating;
- (id)overrideDrawable;
- (void)propagateTextTypeToDrawables;
- (id)properties;
- (int)runType;
- (void)setDrawable:(id)arg1;
- (void)setFloating:(bool)arg1;
- (void)setImageBlipRef:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setTextType:(int)arg1 recursivelyToDrawable:(id)arg2;

@end
