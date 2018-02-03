/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMedia.framework/CoreMedia
 */

@interface CMSM_IDSServer : NSObject <IDSServiceDelegate> {
    NSObject<OS_dispatch_queue> * idsDispatchQueue;
    IDSService * pIdsService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)init;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;

@end
