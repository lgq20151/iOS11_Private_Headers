/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATRequest : ATMessage <NSSecureCoding> {
    NSString * _command;
    NSString * _dataClass;
}

@property (nonatomic, copy) NSString *command;
@property (nonatomic, copy) NSString *dataClass;

// Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalDescription;
- (id)command;
- (id)dataClass;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommand:(id)arg1 dataClass:(id)arg2 parameters:(id)arg3;
- (id)partialResponseWithParameters:(id)arg1;
- (id)responseWithError:(id)arg1 parameters:(id)arg2;
- (void)setCommand:(id)arg1;
- (void)setDataClass:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation

- (id)ATPMessage;
- (id)ATPMessageWithPayloadData:(id)arg1;
- (id)initWithATPMessage:(id)arg1;

@end