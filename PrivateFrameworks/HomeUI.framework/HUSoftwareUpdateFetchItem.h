/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSoftwareUpdateFetchItem : HFItem {
    HMHome * _home;
    NAFuture * _softwareUpdateFetchFuture;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NAFuture *softwareUpdateFetchFuture;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 softwareUpdateFetchFuture:(id)arg2;
- (id)softwareUpdateFetchFuture;

@end