/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPlaceholderValue : NSNumber {
    struct _NSZone { } * zoneForInstance;
}

+ (bool)supportsSecureCoding;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)autorelease;
- (void)dealloc;
- (void)getValue:(void*)arg1;
- (void)getValue:(void*)arg1 size:(unsigned long long)arg2;
- (id)init;
- (id)initWithBytes:(const void*)arg1 objCType:(const char *)arg2;
- (id)initWithCoder:(id)arg1;
- (const char *)objCType;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
