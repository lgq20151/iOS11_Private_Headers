/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSProgressPublisherProxy : NSObject <NSProgressPublisher> {
    NSXPCConnection * _connection;
    <NSProgressPublisher> * _forwarder;
    NSFileAccessNode * _itemLocation;
    NSString * _lowerCaseCategoryName;
    id  _publisherID;
    NSProgressValues * _values;
}

@property (copy) NSString *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property NSFileAccessNode *itemLocation;
@property (readonly) Class superclass;
@property (readonly, copy) NSProgressValues *values;

- (oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(bool)arg2;
- (oneway void)cancel;
- (id)category;
- (void)dealloc;
- (id)description;
- (id)descriptionWithIndenting:(id)arg1;
- (id)initWithForwarder:(id)arg1 onConnection:(id)arg2 publisherID:(id)arg3 values:(id)arg4;
- (bool)isFromConnection:(id)arg1;
- (id)itemLocation;
- (void)observeValue:(id)arg1 forKey:(id)arg2 inUserInfo:(bool)arg3;
- (oneway void)pause;
- (oneway void)prioritize;
- (id)publisherID;
- (oneway void)resume;
- (void)setCategory:(id)arg1;
- (void)setItemLocation:(id)arg1;
- (id)values;

@end
