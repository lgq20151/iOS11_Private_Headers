/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCMomentsRequest : NSObject {
    id  _delegate;
    NSString * _initiatorID;
    unsigned char  _mediaType;
    unsigned char  _mode;
    NSString * _transactionID;
}

@property (nonatomic) NSObject<AVCMomentsRequestDelegate> *delegate;
@property (nonatomic, readonly) NSString *initiatorID;
@property (nonatomic, readonly) unsigned char mediaType;
@property (nonatomic) unsigned char mode;
@property (nonatomic, readonly) NSString *transactionID;

- (void)dealloc;
- (id)delegate;
- (id)description;
- (bool)endWithError:(id*)arg1;
- (id)initWithMediaType:(unsigned char)arg1 initiatorID:(id)arg2;
- (id)initWithMediaType:(unsigned char)arg1 initiatorID:(id)arg2 transactionID:(id)arg3;
- (id)initiatorID;
- (unsigned char)mediaType;
- (unsigned char)mode;
- (bool)rejectWithError:(id*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMode:(unsigned char)arg1;
- (bool)startWithError:(id*)arg1;
- (id)transactionID;
- (bool)validateWithError:(id*)arg1;

@end
