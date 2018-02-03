/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLBuiltInArgument : MTLArgumentInternal {
    unsigned short  _builtInDataType;
    unsigned short  _builtInType;
}

- (unsigned long long)builtInDataType;
- (unsigned long long)builtInType;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 active:(bool)arg4 index:(unsigned long long)arg5 dataType:(unsigned long long)arg6 builtInType:(unsigned long long)arg7;

@end
