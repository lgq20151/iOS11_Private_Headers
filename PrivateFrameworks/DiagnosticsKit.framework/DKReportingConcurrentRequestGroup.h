/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKReportingConcurrentRequestGroup : NSObject {
    NSMutableDictionary * _requestLookupByGenerator;
    struct NSMutableSet { Class x1; } * _requests;
    struct NSMutableSet { Class x1; } * _resources;
}

@property (nonatomic, retain) NSMutableDictionary *requestLookupByGenerator;
@property (nonatomic, retain) NSMutableSet *requests;
@property (nonatomic, retain) NSMutableSet *resources;

- (void).cxx_destruct;
- (bool)addComponentIdentity:(id)arg1 usingGenerator:(id)arg2;
- (id)init;
- (id)requestLookupByGenerator;
- (struct NSMutableSet { Class x1; }*)requests;
- (struct NSMutableSet { Class x1; }*)resources;
- (void)setRequestLookupByGenerator:(id)arg1;
- (void)setRequests:(struct NSMutableSet { Class x1; }*)arg1;
- (void)setResources:(struct NSMutableSet { Class x1; }*)arg1;

@end
