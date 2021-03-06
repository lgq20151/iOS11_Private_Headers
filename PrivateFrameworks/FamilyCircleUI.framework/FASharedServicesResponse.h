/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FASharedServicesResponse : AAResponse {
    NSArray * _services;
}

@property (nonatomic, readonly) NSArray *services;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)services;

@end
