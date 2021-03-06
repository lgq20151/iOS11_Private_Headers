/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarExternalForegroundStyleAttributes : UIStatusBarForegroundStyleAttributes

- (long long)activityIndicatorStyleWithSyncActivity:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsForBatteryInsides;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsForBluetoothBatteryInsides;
- (double)edgePadding;
- (id)makeTextFontForStyle:(long long)arg1;
- (double)middlePadding;
- (double)scale;
- (double)standardPadding;
- (id)textForNetworkType:(int)arg1;
- (double)textOffsetForStyle:(long long)arg1;
- (id)uniqueIdentifier;
- (bool)usesVerticalLayout;

@end
