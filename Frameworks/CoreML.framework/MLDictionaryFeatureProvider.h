/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLDictionaryFeatureProvider : NSObject <MLFeatureProvider, NSFastEnumeration> {
    NSDictionary * _dictionary;
}

@property (nonatomic, retain) NSDictionary *dictionary;
@property (nonatomic, readonly) NSSet *featureNames;

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)dictionary;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithFeatureProvider:(id)arg1;
- (id)initWithFeatureProvider:(id)arg1 featureNames:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setDictionary:(id)arg1;

@end