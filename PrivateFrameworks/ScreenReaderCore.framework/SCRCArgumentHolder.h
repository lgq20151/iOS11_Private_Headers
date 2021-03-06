/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCArgumentHolder : NSObject {
    SCRCArgumentHolderPrivate * _private;
}

- (void).cxx_destruct;
- (SEL)action;
- (id)argument;
- (id)argumentDescription;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isRequired;
- (id)option;
- (bool)process;
- (void)setAction:(SEL)arg1;
- (void)setArgument:(id)arg1;
- (void)setArgumentDescription:(id)arg1;
- (void)setIsRequired:(bool)arg1;
- (void)setOption:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
