/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface SupplyLevelView : UIView {
    NSArray * colors;
    int  supplyLevel;
}

@property (nonatomic, retain) NSArray *colors;
@property (nonatomic) int supplyLevel;

- (void).cxx_destruct;
- (id)colors;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isOpaque;
- (void)setColors:(id)arg1;
- (void)setSupplyLevel:(int)arg1;
- (int)supplyLevel;

@end
