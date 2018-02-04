/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRSyncAnisetteDataResponse : TRResponseMessage {
    bool  _didSucceed;
}

@property (nonatomic) bool didSucceed;

+ (bool)supportsSecureCoding;

- (id)description;
- (bool)didSucceed;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDidSucceed:(bool)arg1;

@end