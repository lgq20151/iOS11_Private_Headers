/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioShareInfoRequest : RadioRequest {
    NSArray * _acceptedMIMETypes;
    SSURLConnectionRequest * _request;
    long long  _shareType;
    NSString * _stationHash;
    long long  _stationID;
}

@property (nonatomic, copy) NSArray *acceptedMIMETypes;

- (void).cxx_destruct;
- (id)acceptedMIMETypes;
- (id)initWithStation:(id)arg1 shareType:(long long)arg2;
- (void)setAcceptedMIMETypes:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)startWithShareInformationCompletionHandler:(id /* block */)arg1;

@end
