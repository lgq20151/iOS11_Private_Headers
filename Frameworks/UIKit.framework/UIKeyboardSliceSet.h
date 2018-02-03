/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardSliceSet : NSObject {
    NSMutableDictionary * _controlKeys;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _endRect;
    double  _leftWidth;
    double  _mergePoint;
    double  _rightWidth;
    NSMutableSet * _slices;
    NSString * _ssid;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _startRect;
}

@property (retain) NSMutableDictionary *controlKeys;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } endRect;
@property double leftWidth;
@property double mergePoint;
@property double rightWidth;
@property (retain) NSString *sliceSetID;
@property (readonly) NSMutableSet *slices;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } startRect;

+ (id)sliceSetWithDictionaryRepresenation:(id)arg1;

- (void)addSlice:(id)arg1;
- (id)controlKeys;
- (void)dealloc;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endRect;
- (id)initWithSliceID:(id)arg1;
- (double)leftWidth;
- (double)mergePoint;
- (double)rightWidth;
- (void)setControlKeys:(id)arg1;
- (void)setEndRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLeftWidth:(double)arg1;
- (void)setMergePoint:(double)arg1;
- (void)setRightWidth:(double)arg1;
- (void)setSliceSetID:(id)arg1;
- (void)setStartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)sliceSetID;
- (id)slices;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startRect;

@end
