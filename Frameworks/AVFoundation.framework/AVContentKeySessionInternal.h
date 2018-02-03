/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVContentKeySessionInternal : NSObject {
    NSData * _appIdentifier;
    NSHashTable * _contentKeyRecipients;
    NSMutableArray * _cryptorsList;
    NSMutableDictionary * _decryptorsByInitData;
    AVWeakReferencingDelegateStorage * _delegateStorage;
    struct OpaqueFigContentKeySession { } * _figContentKeySession;
    NSString * _hlsMethod;
    bool  _internal;
    bool  _isExpired;
    NSString * _keySystem;
    struct __CFData { } * _protectorSessionIdentifier;
    NSURL * _storageURL;
    NSObject<OS_dispatch_queue> * _threadSafetyQ;
    AVWeakReference * _weakReference;
}

@end
