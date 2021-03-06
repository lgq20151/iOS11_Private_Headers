/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLCompileOptions : NSObject <NSCopying>

@property (nonatomic) bool debuggingEnabled;
@property (nonatomic) bool fastMathEnabled;
@property (nonatomic) bool glBufferBindPoints;
@property (nonatomic) unsigned long long languageVersion;
@property (nonatomic, copy) NSDictionary *preprocessorMacros;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
