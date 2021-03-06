/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXConnectionsLocation : NSObject {
    NSDictionary * _addressComponents;
    NSString * _administrativeArea;
    NSString * _country;
    NSDate * _createdAt;
    NSString * _fullFormattedAddress;
    NSString * _label;
    NSNumber * _latitude;
    NSNumber * _lifetime;
    NSString * _locality;
    NSNumber * _longitude;
    NSURL * _mapItemURL;
    NSString * _name;
    NSString * _originatingBundleID;
    NSURL * _originatingWebsiteURL;
    NSString * _postalCode;
    NSString * _shortValue;
    bool  _shouldAggregate;
    NSString * _source;
    NSString * _subThoroughfare;
    NSString * _thoroughfare;
    NSString * _trigger;
    NSString * _value;
}

@property (nonatomic, copy) NSDictionary *addressComponents;
@property (nonatomic, copy) NSString *administrativeArea;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, copy) NSString *fullFormattedAddress;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSNumber *latitude;
@property (nonatomic, copy) NSNumber *lifetime;
@property (nonatomic, copy) NSString *locality;
@property (nonatomic, copy) NSNumber *longitude;
@property (nonatomic, copy) NSURL *mapItemURL;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *originatingBundleID;
@property (nonatomic, copy) NSURL *originatingWebsiteURL;
@property (nonatomic, copy) NSString *postalCode;
@property (nonatomic, copy) NSString *shortValue;
@property (nonatomic) bool shouldAggregate;
@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) NSString *subThoroughfare;
@property (nonatomic, copy) NSString *thoroughfare;
@property (nonatomic, copy) NSString *trigger;
@property (nonatomic, copy) NSString *value;

+ (unsigned long long)round:(double)arg1 toNearest:(double)arg2;

- (void).cxx_destruct;
- (unsigned char)_pexItemSource;
- (unsigned long long)_roundedPredictionAge;
- (id)addressComponents;
- (id)addressDictionary;
- (id)administrativeArea;
- (id)country;
- (id)createdAt;
- (id)decLocationItem;
- (id)description;
- (id)fullFormattedAddress;
- (id)label;
- (id)latitude;
- (id)lifetime;
- (id)locality;
- (id)longitude;
- (id)mapItemURL;
- (id)name;
- (id)originatingBundleID;
- (id)originatingWebsiteURL;
- (id)postalCode;
- (id)quickTypeItem;
- (void)setAddressComponents:(id)arg1;
- (void)setAdministrativeArea:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setCreatedAt:(id)arg1;
- (void)setFullFormattedAddress:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLifetime:(id)arg1;
- (void)setLocality:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setMapItemURL:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOriginatingBundleID:(id)arg1;
- (void)setOriginatingWebsiteURL:(id)arg1;
- (void)setPostalCode:(id)arg1;
- (void)setShortValue:(id)arg1;
- (void)setShouldAggregate:(bool)arg1;
- (void)setSource:(id)arg1;
- (void)setSubThoroughfare:(id)arg1;
- (void)setThoroughfare:(id)arg1;
- (void)setTrigger:(id)arg1;
- (void)setValue:(id)arg1;
- (id)shortValue;
- (bool)shouldAggregate;
- (id)source;
- (id)subThoroughfare;
- (id)thoroughfare;
- (id)trigger;
- (id)value;

@end
