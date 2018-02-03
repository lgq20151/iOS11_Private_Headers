/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusMapSnapshotDebugInfo : NSObject {
    _UIFocusMapSearchInfo * _focusMapSearchInfo;
    UIImage * _image;
    struct CGPoint { 
        double x; 
        double y; 
    }  _imageAnchorPoint;
    _UIFocusMapSnapshot * _snapshot;
}

@property (nonatomic, readonly) _UIFocusMapSearchInfo *focusMapSearchInfo;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } imageAnchorPoint;
@property (nonatomic, readonly) _UIFocusMapSnapshot *snapshot;

+ (id)_summaryImageForDebugInfoArray:(id)arg1 forFocusMovementWithInfo:(id)arg2 scaleFactor:(double)arg3;

- (void).cxx_destruct;
- (id)_drawImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectContainingAllFocusRegions;
- (id)focusMapSearchInfo;
- (id)image;
- (struct CGPoint { double x1; double x2; })imageAnchorPoint;
- (id)initWithSnapshot:(id)arg1 focusMapSearchInfo:(id)arg2;
- (id)snapshot;

@end
