/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLStructMember : NSObject

@property (readonly) unsigned long long argumentIndex;
@property (readonly) unsigned long long dataType;
@property (readonly) NSString *name;
@property (readonly) unsigned long long offset;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)arrayType;
- (id)indirectArgumentType;
- (id)pointerType;
- (id)structType;
- (id)textureReferenceType;

@end
