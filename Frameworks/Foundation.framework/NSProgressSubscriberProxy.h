/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSProgressSubscriberProxy : NSObject <NSProgressSubscriber> {
    NSString * _bundleID;
    NSXPCConnection * _connection;
    <NSProgressSubscriber> * _forwarder;
    NSFileAccessNode * _itemLocation;
    NSString * _lowerCaseCategoryName;
    id  _subscriberID;
}

@property (copy) NSString *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property NSFileAccessNode *itemLocation;
@property (readonly) Class superclass;

- (oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(bool)arg4;
- (id)appBundleID;
- (id)category;
- (void)dealloc;
- (id)description;
- (id)descriptionWithIndenting:(id)arg1;
- (id)initWithForwarder:(id)arg1 onConnection:(id)arg2 subscriberID:(id)arg3 appBundleID:(id)arg4;
- (bool)isFromConnection:(id)arg1;
- (id)itemLocation;
- (oneway void)observePublisherForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 inUserInfo:(bool)arg4;
- (oneway void)removePublisherForID:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setItemLocation:(id)arg1;

@end
