/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDAMessageHeaderFetchConsumer : NSObject <MFDASyncResponseConsumer> {
    NSData * _data;
    MFError * _error;
    MFDAMessageStore * _store;
    bool  _succeeded;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) MFError *error;
@property (nonatomic, retain) MFDAMessageStore *store;
@property (nonatomic, readonly) bool succeeded;

- (id)data;
- (void)dealloc;
- (id)error;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (void)setData:(id)arg1;
- (void)setError:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (bool)succeeded;
- (bool)wantsData;

@end
