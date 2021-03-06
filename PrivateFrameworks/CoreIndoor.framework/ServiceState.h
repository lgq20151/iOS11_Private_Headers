/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface ServiceState : NSObject {
    IndoorProtocolProxy * _delegateProxy;
    long long  _operatingMode;
    bool  _pausedLocalization;
    NSSet * _selectedVenues;
    bool  _updateLocation;
}

@property (nonatomic, retain) IndoorProtocolProxy *delegateProxy;
@property (nonatomic) long long operatingMode;
@property (nonatomic) bool pausedLocalization;
@property (nonatomic, retain) NSSet *selectedVenues;
@property (nonatomic) bool updateLocation;

- (void).cxx_destruct;
- (id)delegateProxy;
- (long long)operatingMode;
- (bool)pausedLocalization;
- (id)selectedVenues;
- (void)setDelegateProxy:(id)arg1;
- (void)setOperatingMode:(long long)arg1;
- (void)setPausedLocalization:(bool)arg1;
- (void)setSelectedVenues:(id)arg1;
- (void)setUpdateLocation:(bool)arg1;
- (bool)updateLocation;

@end
