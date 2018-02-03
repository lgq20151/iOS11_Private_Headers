/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileReadingClaim : NSFileAccessClaim {
    long long  _linkResolutionCount;
    NSFileAccessNode * _location;
    unsigned long long  _options;
    NSFileAccessNode * _rootNode;
    NSURL * _url;
    bool  _urlDidChange;
}

+ (bool)supportsSecureCoding;

- (id)allURLs;
- (bool)blocksClaim:(id)arg1;
- (void)dealloc;
- (void)devalueSelf;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(bool)arg2;
- (void)forwardUsingConnection:(id)arg1 crashHandler:(id /* block */)arg2;
- (void)granted;
- (id)initWithCoder:(id)arg1;
- (id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 claimer:(id /* block */)arg4;
- (void)invokeClaimer;
- (bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)resolveURLThenMaybeContinueInvokingClaimer:(id /* block */)arg1;
- (bool)shouldBeRevokedPriorToInvokingAccessor;
- (bool)shouldCancelInsteadOfWaiting;

@end
