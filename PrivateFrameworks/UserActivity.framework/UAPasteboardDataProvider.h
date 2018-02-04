/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

@interface UAPasteboardDataProvider : NSObject <UAPasteboardItemProviding> {
    NSData * _data;
    NSString * _type;
    NSUUID * _uuid;
}

@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSUUID *uuid;

- (void).cxx_destruct;
- (id)data;
- (void)getDataWithCompletionBlock:(id /* block */)arg1;
- (id)initWithData:(id)arg1 type:(id)arg2;
- (void)setData:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)type;
- (id)uuid;

@end