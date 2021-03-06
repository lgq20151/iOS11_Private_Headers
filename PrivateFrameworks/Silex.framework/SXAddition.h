/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAddition : SXJSONObject <SXClassFactoryProtocol>

@property (nonatomic, readonly) SXAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (readonly) Class superclass;

+ (void)initializeObject;
+ (id)typeString;

- (id)action;

@end
