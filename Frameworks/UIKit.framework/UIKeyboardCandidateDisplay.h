/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateDisplay : NSObject

+ (id)activeCandidateList;
+ (id)activeCandidateView;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })barEdgeInsets;
+ (double)barHeight;
+ (double)barHeightForInterfaceOrientation:(long long)arg1;
+ (double)barWidthForCurrentScreenTraits;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultBarFrame;
+ (void)setActiveCandidateView:(id)arg1;
+ (void)setScreenTraits:(id)arg1;
+ (id)sharedCandidateView;
+ (id)sharedCandidateViewForInlineView;
+ (id)sharedCandidateViewForInlineView:(bool)arg1;

@end
