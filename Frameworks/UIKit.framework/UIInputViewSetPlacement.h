/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewSetPlacement : NSObject <NSSecureCoding> {
    bool  _dirty;
    double  _extendedHeight;
    <UIInputViewSetPlacementDelegate> * delegate;
}

@property (nonatomic) <UIInputViewSetPlacementDelegate> *delegate;
@property (nonatomic) double extendedHeight;
@property (nonatomic, readonly) bool isInteractive;
@property (nonatomic, readonly) bool isUndocked;
@property (nonatomic, readonly) bool showsInputViews;
@property (nonatomic, readonly) bool showsKeyboard;

+ (id)encodablePlacementsForXPC;
+ (id)placement;
+ (bool)supportsSecureCoding;

- (bool)accessoryViewWillAppear;
- (double)alpha;
- (Class)applicatorClassForKeyboard:(bool)arg1;
- (id)applicatorInfoForOwner:(id)arg1;
- (void)checkSizeForOwner:(id)arg1;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (double)extendedHeight;
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)inputViewWillAppear;
- (bool)isEqual:(id)arg1;
- (bool)isInteractive;
- (bool)isUndocked;
- (unsigned long long)notificationsForTransitionToPlacement:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDirty;
- (void)setExtendedHeight:(double)arg1;
- (bool)showsInputViews;
- (bool)showsKeyboard;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;

@end
