/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileSubarbitrationClaim : NSFileAccessClaim {
    NSMutableSet * _forwardedClaimIDs;
    bool  _nullified;
    NSMutableDictionary * _readRelinquishmentsByPresenterID;
    NSArray * _readingLocations;
    unsigned long long  _readingOptions;
    NSArray * _readingURLs;
    NSFileAccessNode * _rootNode;
    NSXPCConnection * _subarbiterConnection;
    NSMutableDictionary * _writeRelinquishmentsByPresenterID;
    NSArray * _writingLocations;
    unsigned long long  _writingOptions;
    NSArray * _writingURLs;
}

@property (retain) NSXPCConnection *subarbiterConnection;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)descriptionWithIndenting:(id)arg1;
- (void)devalueOldClaim:(id)arg1;
- (void)devalueSelf;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluateNewClaim:(id)arg1;
- (bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(bool)arg2;
- (void)forwardReacquisitionForWritingClaim:(bool)arg1 withID:(in id)arg2 toPresenterForID:(id)arg3 usingReplySender:(id /* block */)arg4;
- (void)forwardRelinquishmentForWritingClaim:(bool)arg1 withID:(id)arg2 options:(unsigned long long)arg3 purposeID:(id)arg4 subitemURL:(id)arg5 toPresenter:(id)arg6 usingReplySender:(id /* block */)arg7;
- (void)forwardUsingConnection:(id)arg1 crashHandler:(id /* block */)arg2;
- (void)forwardUsingConnection:(id)arg1 withServer:(id)arg2 crashHandler:(id /* block */)arg3;
- (void)granted;
- (id)initWithCoder:(id)arg1;
- (id)initWithReadingURLs:(id)arg1 options:(unsigned long long)arg2 writingURLs:(id)arg3 options:(unsigned long long)arg4 claimer:(id /* block */)arg5;
- (void)invokeClaimer;
- (bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (id)relinquishmentForWrite:(bool)arg1 toPresenterForID:(id)arg2;
- (void)revoked;
- (void)setSubarbiterConnection:(id)arg1;
- (id)subarbiterConnection;

@end
