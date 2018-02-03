/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextPositionImpl : UITextPosition {
    WebVisiblePosition * _webVisiblePosition;
}

@property (nonatomic, retain) WebVisiblePosition *webVisiblePosition;

+ (id)wrapWebVisiblePosition:(id)arg1;

- (void)dealloc;
- (id)description;
- (bool)isEqual:(id)arg1;
- (void)setWebVisiblePosition:(id)arg1;
- (id)webVisiblePosition;

@end
