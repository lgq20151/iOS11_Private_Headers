/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface MDPerson : CSPerson

@property (readonly) NSString *handle;

+ (bool)supportsSecureCoding;

- (id)handle;
- (id)initWithDisplayName:(id)arg1 handle:(id)arg2 handleIdentifier:(id)arg3;

@end
