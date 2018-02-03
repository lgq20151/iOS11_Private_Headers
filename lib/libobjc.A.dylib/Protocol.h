/* made by EzioChiu
   Image: /usr/lib/libobjc.A.dylib
 */

@interface Protocol : NSObject

+ (void)load;

- (bool)conformsTo:(id)arg1;
- (struct objc_method_description { SEL x1; char *x2; }*)descriptionForClassMethod:(SEL)arg1;
- (struct objc_method_description { SEL x1; char *x2; }*)descriptionForInstanceMethod:(SEL)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (const char *)name;

@end
