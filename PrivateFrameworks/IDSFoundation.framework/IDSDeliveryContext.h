/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSDeliveryContext : NSObject {
    NSNumber * _currentAverageRTT;
    NSError * _deliveryError;
    NSString * _deviceID;
    NSArray * _displayIDs;
    long long  _idsResponseCode;
    NSNumber * _isDeviceBlackedOut;
    bool  _lastCall;
    NSNumber * _localMessageState;
    long long  _responseCode;
    NSNumber * _responseCommand;
    NSError * _responseError;
    NSNumber * _responseTimeStamp;
    NSData * _responseToken;
    NSNumber * _wpConnectionErrorCode;
    NSDictionary * _wpConnectionErrorUserInfo;
}

@property (nonatomic, copy) NSNumber *currentAverageRTT;
@property (nonatomic, copy) NSError *deliveryError;
@property (nonatomic, copy) NSString *deviceID;
@property (nonatomic, copy) NSArray *displayIDs;
@property (nonatomic) long long idsResponseCode;
@property (nonatomic, copy) NSNumber *isDeviceBlackedOut;
@property (nonatomic) bool lastCall;
@property (nonatomic, copy) NSNumber *localMessageState;
@property (nonatomic) long long responseCode;
@property (nonatomic, copy) NSNumber *responseCommand;
@property (nonatomic, copy) NSError *responseError;
@property (nonatomic, copy) NSNumber *responseTimeStamp;
@property (nonatomic, copy) NSData *responseToken;
@property (nonatomic, copy) NSNumber *wpConnectionErrorCode;
@property (nonatomic, copy) NSDictionary *wpConnectionErrorUserInfo;

- (void).cxx_destruct;
- (id)currentAverageRTT;
- (id)deliveryError;
- (id)deviceID;
- (id)displayIDs;
- (long long)idsResponseCode;
- (id)initWithError:(id)arg1;
- (id)initWithResponseCode:(long long)arg1 deviceID:(id)arg2;
- (id)initWithResponseCode:(long long)arg1 deviceID:(id)arg2 currentAverageRTT:(id)arg3 isDeviceBlackedOut:(id)arg4 localMessageState:(id)arg5;
- (id)initWithResponseCode:(long long)arg1 error:(id)arg2 lastCall:(bool)arg3;
- (id)initWithServerResponseDictionary:(id)arg1;
- (id)isDeviceBlackedOut;
- (bool)lastCall;
- (id)localMessageState;
- (long long)responseCode;
- (id)responseCommand;
- (id)responseError;
- (id)responseTimeStamp;
- (id)responseToken;
- (void)setCurrentAverageRTT:(id)arg1;
- (void)setDeliveryError:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setDisplayIDs:(id)arg1;
- (void)setIdsResponseCode:(long long)arg1;
- (void)setIsDeviceBlackedOut:(id)arg1;
- (void)setLastCall:(bool)arg1;
- (void)setLocalMessageState:(id)arg1;
- (void)setResponseCode:(long long)arg1;
- (void)setResponseCommand:(id)arg1;
- (void)setResponseError:(id)arg1;
- (void)setResponseTimeStamp:(id)arg1;
- (void)setResponseToken:(id)arg1;
- (void)setWpConnectionErrorCode:(id)arg1;
- (void)setWpConnectionErrorUserInfo:(id)arg1;
- (id)wpConnectionErrorCode;
- (id)wpConnectionErrorUserInfo;

@end
