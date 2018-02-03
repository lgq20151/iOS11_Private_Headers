/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebClipLinkTag : NSObject {
    NSString * _href;
    bool  _mediaMatchesLandscapeOrientation;
    bool  _mediaMatchesPortraitOrientation;
    NSString * _rel;
    NSString * _sizes;
}

@property (nonatomic, copy) NSString *href;
@property (nonatomic, readonly) NSURL *hrefURL;
@property (nonatomic) bool mediaMatchesLandscapeOrientation;
@property (nonatomic) bool mediaMatchesPortraitOrientation;
@property (nonatomic, copy) NSString *rel;
@property (nonatomic, copy) NSString *sizes;

- (void).cxx_destruct;
- (id)href;
- (id)hrefURL;
- (bool)mediaMatchesLandscapeOrientation;
- (bool)mediaMatchesPortraitOrientation;
- (id)rel;
- (void)setHref:(id)arg1;
- (void)setMediaMatchesLandscapeOrientation:(bool)arg1;
- (void)setMediaMatchesPortraitOrientation:(bool)arg1;
- (void)setRel:(id)arg1;
- (void)setSizes:(id)arg1;
- (id)sizes;

@end
