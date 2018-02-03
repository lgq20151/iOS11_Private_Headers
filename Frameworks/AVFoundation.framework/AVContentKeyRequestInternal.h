/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVContentKeyRequestInternal : NSObject {
    int  cryptorListenerAdded;
    struct OpaqueFigCustomURLHandler { } * customURLHandler;
    id  customURLProviderContext;
    NSError * error;
    struct OpaqueFigCPECryptor { } * figCryptor;
    id  identifier;
    NSData * initializationData;
    bool  providesPersistableKey;
    unsigned long long  requestID;
    struct __CFDictionary { } * requestInfo;
    int  responseInfoSent;
    AVContentKeySession * session;
    long long  status;
}

@end
