/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLDownloadInternal : NSObject {
    NSOperationQueue * _targetQueue;
    struct _CFURLDownload { } * cfDownload;
    struct _CFURLAuthChallenge { } * currCFChallenge;
    NSURLAuthenticationChallenge * currNSChallenge;
    id  delegate;
    bool  downloadActive;
}

- (void)dealloc;

@end
