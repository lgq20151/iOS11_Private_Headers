/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLArgumentDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long access;
@property (nonatomic) unsigned long long arrayLength;
@property (nonatomic) unsigned long long constantBlockAlignment;
@property (nonatomic) unsigned long long dataType;
@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long textureType;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)argumentDescriptor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
