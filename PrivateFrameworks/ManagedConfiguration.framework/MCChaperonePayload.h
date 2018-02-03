/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCChaperonePayload : MCPayload {
    bool  _nonChaperonePairingAllowed;
    NSNumber * _nonChaperonePairingAllowedNum;
    NSData * _pairingCertificateData;
}

@property (nonatomic, readonly) bool nonChaperonePairingAllowed;
@property (nonatomic, readonly) NSNumber *nonChaperonePairingAllowedNum;
@property (nonatomic, readonly, retain) NSData *pairingCertificateData;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (bool)nonChaperonePairingAllowed;
- (id)nonChaperonePairingAllowedNum;
- (id)pairingCertificateData;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end
