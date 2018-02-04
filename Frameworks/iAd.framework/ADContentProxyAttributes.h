/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADContentProxyAttributes : NSObject {
    NSURL * _contentProxyURL;
}

@property (nonatomic, copy) NSURL *contentProxyURL;

+ (id)sharedInstance;

- (id)contentProxyURL;
- (void)contentProxyURLDidChange:(id)arg1;
- (void)dealloc;
- (void)setContentProxyURL:(id)arg1;

@end