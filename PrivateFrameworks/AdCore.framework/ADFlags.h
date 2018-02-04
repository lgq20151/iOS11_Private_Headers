/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADFlags : NSObject <NSCopying> {
    unsigned long long  _flags;
}

@property unsigned long long flags;

+ (id)initWithFlags:(unsigned long long)arg1;

- (bool)allSet:(unsigned long long)arg1;
- (unsigned long long)anySet:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)flags;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isSet:(unsigned long long)arg1;
- (bool)noneSet;
- (void)reset;
- (void)set:(unsigned long long)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)unset:(unsigned long long)arg1;

@end