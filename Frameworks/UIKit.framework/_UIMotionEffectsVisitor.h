/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIMotionEffectsVisitor : _UIViewVisitor {
    unsigned long long  _countOfMotionEffectsInSubview;
    bool  _subviewAddedToHierarchy;
}

- (bool)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5;
- (bool)_visitView:(id)arg1;

@end
