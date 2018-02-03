/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTResult : NSObject {
    NSError * _inError;
    id  _inValue;
    long long  _state;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, retain) NSError *inError;
@property (nonatomic, retain) id inValue;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) id value;

- (void).cxx_destruct;
- (id)error;
- (id)inError;
- (id)inValue;
- (id)initWithError:(id)arg1;
- (id)initWithState:(long long)arg1 value:(id)arg2 error:(id)arg3;
- (id)initWithSuccess:(id)arg1;
- (void)setInError:(id)arg1;
- (void)setInValue:(id)arg1;
- (long long)state;
- (id)value;

@end
