/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAccessibilityCustomRotorItemResult : NSObject {
    <NSObject> * _targetElement;
    UITextRange * _targetRange;
    NSUUID * uuid;
}

@property (nonatomic) <NSObject> *targetElement;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } targetNSRange;
@property (nonatomic, retain) UITextRange *targetRange;
@property (nonatomic, retain) NSUUID *uuid;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void).cxx_destruct;
- (id)initWithTargetElement:(id)arg1 targetRange:(id)arg2;
- (void)setTargetElement:(id)arg1;
- (void)setTargetRange:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)targetElement;
- (id)targetRange;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (void)setTargetNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })targetNSRange;

@end
