/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXLayoutItem : NSObject <PXLayoutItemInput> {
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    double  _weight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double weight;

- (id)init;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 weight:(double)arg2;
- (struct CGSize { double x1; double x2; })size;
- (double)weight;

@end
