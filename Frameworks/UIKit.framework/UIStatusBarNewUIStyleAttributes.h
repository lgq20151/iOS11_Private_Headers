/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarNewUIStyleAttributes : UIStatusBarStyleAttributes {
    UIColor * _backgroundColor;
    UIColor * _foregroundColor;
    bool  _hasBusyBackground;
}

- (void).cxx_destruct;
- (id)backgroundColorWithTintColor:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)foregroundColor;
- (Class)foregroundStyleClass;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 backgroundColor:(id)arg2 foregroundColor:(id)arg3;
- (id)initWithRequest:(id)arg1 backgroundColor:(id)arg2 foregroundColor:(id)arg3 hasBusyBackground:(bool)arg4;
- (bool)isTranslucent;
- (bool)isTransparent;
- (long long)legibilityStyle;
- (id)newForegroundStyleWithHeight:(double)arg1;
- (bool)shouldUseVisualAltitude;

@end
