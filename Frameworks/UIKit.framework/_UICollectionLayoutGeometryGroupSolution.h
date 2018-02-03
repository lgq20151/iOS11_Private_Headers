/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICollectionLayoutGeometryGroupSolution : NSObject {
    NSArray * _frames;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, retain) NSArray *frames;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

+ (id)solutionWithSize:(struct CGSize { double x1; double x2; })arg1 frames:(id)arg2;

- (void).cxx_destruct;
- (id)frameAtIndex:(long long)arg1 withOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)frames;
- (id)framesWithOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 frames:(id)arg2;
- (void)setFrames:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
