/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTextParentLayout : TSDLayout {
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumFrameSizeForChildren;
}

@property (nonatomic) struct CGSize { double x1; double x2; } maximumFrameSizeForChildren;

- (id)initWithInfo:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumFrameSizeForChild:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumFrameSizeForChildren;
- (void)setMaximumFrameSizeForChildren:(struct CGSize { double x1; double x2; })arg1;

@end
