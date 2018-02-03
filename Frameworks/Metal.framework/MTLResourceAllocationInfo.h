/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLResourceAllocationInfo : NSObject <NSCoding, NSCopying>

@property (readonly) unsigned long long dirtySize;
@property (readonly) NSString *memoryPool;
@property (readonly) bool pageoffRequired;
@property (readonly) bool purgeable;
@property (readonly) unsigned long long residentSize;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly) unsigned long long virtualSize;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
