/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueObservationInfo : NSObject {
    unsigned long long  _cachedHash;
    bool  _cachedIsShareable;
    NSArray * _observances;
}

- (id)_copyByAddingObservance:(id)arg1;
- (id)_initWithObservances:(id*)arg1 count:(unsigned long long)arg2 hashValue:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
