/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextRange : NSObject

@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly) UITextPosition *end;
@property (getter=_isCaret, nonatomic, readonly) bool isCaret;
@property (getter=_isImpl, nonatomic, readonly) UITextRangeImpl *isImpl;
@property (getter=_isRanged, nonatomic, readonly) bool isRanged;
@property (nonatomic, readonly) UITextPosition *start;

- (bool)_isCaret;
- (id)_isImpl;
- (bool)_isRanged;
- (id)end;
- (bool)isEmpty;
- (id)start;

@end
