/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewVisitor : NSObject {
    bool  __currentlyVisitingHierarchy;
    bool  _tracksHierarchy;
    unsigned long long  _traversalDirection;
    bool  _visitMaskViews;
}

@property (nonatomic) bool _currentlyVisitingHierarchy;
@property (nonatomic) bool tracksHierarchy;
@property (nonatomic, readonly) unsigned long long traversalDirection;
@property (nonatomic) bool visitMaskViews;

+ (void)_addHierarchyTrackingVisitor:(id)arg1;
+ (void)_removeHierarchyTrackingVisitor:(id)arg1;
+ (void)_startTraversalOfVisitor:(id)arg1 withView:(id)arg2;

- (bool)_currentlyVisitingHierarchy;
- (bool)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5;
- (bool)_visitView:(id)arg1;
- (id)initWithTraversalDirection:(unsigned long long)arg1;
- (void)setTracksHierarchy:(bool)arg1;
- (void)setVisitMaskViews:(bool)arg1;
- (void)set_currentlyVisitingHierarchy:(bool)arg1;
- (bool)tracksHierarchy;
- (unsigned long long)traversalDirection;
- (bool)visitMaskViews;

@end
