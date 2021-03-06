/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKLocationRelevanceProvider : NTKRelevanceProvider {
    double  _accuracy;
    bool  _isHomeLocation;
    bool  _isWorkLocation;
    CLLocation * _location;
    double  _radius;
}

@property (nonatomic, readonly) double accuracy;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) double radius;
@property (getter=isUserHomeLocation, nonatomic, readonly) bool userHomeLocation;
@property (getter=isUserWorkLocation, nonatomic, readonly) bool userWorkLocation;

- (void).cxx_destruct;
- (unsigned long long)_hash;
- (double)accuracy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initForHomeLocationWithRadius:(double)arg1;
- (id)initForHomeLocationWithRadius:(double)arg1 accuracy:(double)arg2;
- (id)initForWorkLocationWithRadius:(double)arg1;
- (id)initForWorkLocationWithRadius:(double)arg1 accuracy:(double)arg2;
- (id)initWithLocation:(id)arg1 radius:(double)arg2;
- (id)initWithLocation:(id)arg1 radius:(double)arg2 accuracy:(double)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isUserHomeLocation;
- (bool)isUserWorkLocation;
- (id)location;
- (double)radius;

@end
