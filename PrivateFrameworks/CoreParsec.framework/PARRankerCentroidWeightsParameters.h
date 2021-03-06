/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARRankerCentroidWeightsParameters : NSObject {
    long long  _client;
    long long  _featureType;
    long long  _func;
    double  _weight;
}

@property (nonatomic, readonly) long long client;
@property (nonatomic, readonly) long long featureType;
@property (nonatomic, readonly) long long func;
@property (nonatomic, readonly) double weight;

+ (id)defaultValue;
+ (id)responseFromJSON:(id)arg1;

- (long long)client;
- (long long)featureType;
- (long long)func;
- (double)weight;

@end
