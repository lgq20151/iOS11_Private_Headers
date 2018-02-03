/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusableRegionMapEntry : _UIFocusRegionMapEntry {
    bool  _focusCandidate;
    <_UILegacyFocusRegion> * _focusableRegion;
    bool  _isFocusGuide;
}

@property (getter=isFocusCandidate, nonatomic) bool focusCandidate;
@property (nonatomic) <_UILegacyFocusRegion> *focusableRegion;
@property (nonatomic) bool isFocusGuide;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)drawVisualRepresentationInContext:(struct CGContext { }*)arg1 imageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 isFinal:(bool)arg3;
- (id)focusableRegion;
- (bool)isFocusCandidate;
- (bool)isFocusGuide;
- (void)setFocusCandidate:(bool)arg1;
- (void)setFocusableRegion:(id)arg1;
- (void)setIsFocusGuide:(bool)arg1;
- (id)visualRepresentationColor;

@end
