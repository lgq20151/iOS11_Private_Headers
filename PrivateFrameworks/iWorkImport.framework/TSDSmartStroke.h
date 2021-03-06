/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDSmartStroke : TSDStroke {
    NSString * mStrokeName;
}

@property (nonatomic, copy) NSString *strokeName;

+ (Class)classForName:(id)arg1;
+ (id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3;

- (bool)canApplyDirectlyToRepCALayer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setStrokeName:(id)arg1;
- (bool)shouldAntialiasDefeat;
- (id)strokeName;

@end
