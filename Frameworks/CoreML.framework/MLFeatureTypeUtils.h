/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLFeatureTypeUtils : NSObject

+ (id)descriptionForType:(long long)arg1;
+ (id)featureDescriptionWithName:(id)arg1 consistentWithFeatureArray:(id)arg2 error:(id*)arg3;
+ (long long)featureTypeForObject:(id)arg1;
+ (long long)featureTypeForValuesInArray:(id)arg1 error:(id*)arg2;

@end
