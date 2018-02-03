/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebUserMediaPolicyListener : NSObject <WebAllowDenyPolicyListener> {
    struct RefPtr<WebCore::UserMediaRequest> { 
        struct UserMediaRequest {} *m_ptr; 
    }  _request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)allow;
- (void)cancelUserMediaAccessRequest;
- (void)deny;
- (void)denyOnlyThisRequest;
- (id)initWithUserMediaRequest:(struct Ref<WebCore::UserMediaRequest> { struct UserMediaRequest {} *x1; }*)arg1;
- (bool)shouldClearCache;

@end
