/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCBulletinNotificationSource : NSObject <BBObserverDelegate, NCNotificationDispatcherSourceDelegate, NCNotificationSource> {
    NSMutableDictionary * _bulletinFeeds;
    NCNotificationDispatcher * _dispatcher;
    BBObserver * _observer;
    NSMutableDictionary * _sectionInfoById;
}

@property (nonatomic, retain) NSMutableDictionary *bulletinFeeds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NCNotificationDispatcher *dispatcher;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BBObserver *observer;
@property (nonatomic, retain) NSMutableDictionary *sectionInfoById;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationIconChanged:(id)arg1;
- (id)_bulletinsPerSectionIdForNotificationRequests:(id)arg1;
- (id)_sectionInfoForBulletin:(id)arg1;
- (unsigned long long)_updateFeedForCoverSheetDestination:(unsigned long long)arg1 storedFeed:(unsigned long long)arg2;
- (id)bulletinFeeds;
- (void)dealloc;
- (id)dispatcher;
- (void)dispatcher:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
- (void)dispatcher:(id)arg1 requestsClearingNotificationRequests:(id)arg2 fromDestinations:(id)arg3;
- (void)dispatcher:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
- (void)dispatcher:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;
- (id)init;
- (id)initWithDispatcher:(id)arg1;
- (id)initWithDispatcher:(id)arg1 observer:(id)arg2;
- (id)observer;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(bool)arg4 withReply:(id /* block */)arg5;
- (id)observer:(id)arg1 composedAttachmentImageForType:(long long)arg2 thumbnailData:(id)arg3 key:(id)arg4;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(bool)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(id)arg1 removeSection:(id)arg2;
- (id)observer:(id)arg1 thumbnailSizeConstraintsForAttachmentType:(long long)arg2;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (bool)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1;
- (id)sectionInfoById;
- (void)setBulletinFeeds:(id)arg1;
- (void)setDispatcher:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setSectionInfoById:(id)arg1;

@end