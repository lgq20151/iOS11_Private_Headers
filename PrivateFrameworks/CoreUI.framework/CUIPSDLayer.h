/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayer : NSObject {
    int  _blendMode;
    NSString * _name;
    double  _opacity;
}

@property (nonatomic) int blendMode;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) double opacity;

- (int)blendMode;
- (void)dealloc;
- (id)init;
- (id)name;
- (double)opacity;
- (void)setBlendMode:(int)arg1;
- (void)setName:(id)arg1;
- (void)setOpacity:(double)arg1;

@end
