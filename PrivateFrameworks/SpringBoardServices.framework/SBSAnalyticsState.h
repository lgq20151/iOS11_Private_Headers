/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSAnalyticsState : NSObject <BSDescriptionProviding> {
    NSDictionary * _payload;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timestamp;

+ (id)withTimestamp:(double)arg1;
+ (id)withTimestamp:(double)arg1 payload:(id)arg2;

- (void).cxx_destruct;
- (id)coreAnalyticsRepresentation;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithTimestamp:(double)arg1 payload:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (double)timestamp;

@end
