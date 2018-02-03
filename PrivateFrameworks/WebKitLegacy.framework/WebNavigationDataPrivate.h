/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebNavigationDataPrivate : NSObject {
    NSString * clientRedirectSource;
    bool  hasSubstituteData;
    NSURLRequest * originalRequest;
    NSURLResponse * response;
    NSString * title;
    NSString * url;
}

- (void)dealloc;

@end
