/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebFrameViewPrivate : NSObject {
    WAKScrollView * frameScrollView;
    bool  includedInWebKitStatistics;
    WebFrame * webFrame;
}

- (void)dealloc;

@end
