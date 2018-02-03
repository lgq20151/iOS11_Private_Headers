/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConstantClasses.framework/ConstantClasses
 */

@interface _NSConstantData : NSData

+ (id)alloc;
+ (void)load;

- (const void*)bytes;
- (void)dealloc;
- (unsigned long long)length;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
