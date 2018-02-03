/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLayoutYAxisAnchor : NSLayoutAnchor

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (id)anchorByOffsettingWithConstant:(double)arg1;
- (id)anchorByOffsettingWithDimension:(id)arg1;
- (id)anchorByOffsettingWithDimension:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (id)anchorWithOffsetToAnchor:(id)arg1;
- (id)distanceTo:(id)arg1;
- (bool)isCompatibleWithAnchor:(id)arg1;
- (id)offsetBy:(double)arg1;
- (id)offsetByDimension:(id)arg1;
- (id)offsetByDimension:(id)arg1 times:(double)arg2 plus:(double)arg3;
- (id)offsetTo:(id)arg1;
- (bool)validateOtherAttribute:(long long)arg1;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (id)_constraintBelowAnchor:(id)arg1 relation:(long long)arg2 multiplier:(double)arg3;
- (id)constraintEqualToSystemSpacingBelowAnchor:(id)arg1;
- (id)constraintEqualToSystemSpacingBelowAnchor:(id)arg1 multiplier:(double)arg2;
- (id)constraintGreaterThanOrEqualToSystemSpacingBelowAnchor:(id)arg1;
- (id)constraintGreaterThanOrEqualToSystemSpacingBelowAnchor:(id)arg1 multiplier:(double)arg2;
- (id)constraintLessThanOrEqualToSystemSpacingBelowAnchor:(id)arg1;
- (id)constraintLessThanOrEqualToSystemSpacingBelowAnchor:(id)arg1 multiplier:(double)arg2;

@end
