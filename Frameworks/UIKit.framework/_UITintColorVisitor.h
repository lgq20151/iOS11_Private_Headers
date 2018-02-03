/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITintColorVisitor : _UIViewVisitor {
    UIView * _changedSubview;
    UIView * _originalVisitedView;
    unsigned long long  _reasons;
}

- (bool)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5;
- (bool)_visitView:(id)arg1;
- (id)initWithNotificationReasons:(unsigned long long)arg1;
- (id)initWithTraversalDirection:(unsigned long long)arg1;

@end
