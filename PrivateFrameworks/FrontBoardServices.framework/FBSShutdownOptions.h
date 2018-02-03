/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSShutdownOptions : NSObject <BSXPCCoding, NSCopying> {
    NSString * _reason;
    long long  _rebootType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic) long long rebootType;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithReason:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)reason;
- (long long)rebootType;
- (void)setRebootType:(long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
