/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISlidingBarState : NSObject <NSCopying> {
    long long  __collapsedState;
    double  __keyboardAdjustment;
    double  __leadingOverlayWidth;
    bool  __treatLeadingHiddenAsOverlaps;
    double  _bounce;
    UISlidingBarConfiguration * _configuration;
    double  _leadingDragOffset;
    double  _leadingWidth;
    double  _trailingDragOffset;
    bool  _trailingOverlapsMain;
    double  _trailingWidth;
}

@property (setter=_setCollapsedState:, nonatomic) long long _collapsedState;
@property (nonatomic) double _keyboardAdjustment;
@property (setter=_setLeadingOverlayWidth:, nonatomic) double _leadingOverlayWidth;
@property (setter=_setTreatLeadingHiddenAsOverlaps:, nonatomic) bool _treatLeadingHiddenAsOverlaps;
@property (nonatomic) double bounce;
@property (getter=isCollapsed, nonatomic, readonly) bool collapsed;
@property (nonatomic, retain) UISlidingBarConfiguration *configuration;
@property (nonatomic, readonly) bool isLeadingVisible;
@property (nonatomic, readonly) bool isTrailingVisible;
@property (nonatomic) double leadingDragOffset;
@property (nonatomic, readonly) bool leadingOverlapsMain;
@property (nonatomic) double leadingWidth;
@property (nonatomic) double trailingDragOffset;
@property (nonatomic) bool trailingOverlapsMain;
@property (nonatomic) double trailingWidth;

- (void).cxx_destruct;
- (double)_absoluteDistanceFromRequest:(id)arg1;
- (long long)_collapsedState;
- (double)_distanceFromRequest:(id)arg1;
- (id)_interactiveStateRequest;
- (double)_keyboardAdjustment;
- (bool)_leadingEntirelyOverlapsMain;
- (double)_leadingOverlayWidth;
- (bool)_leadingShouldUseSlidingBars;
- (void)_setCollapsedState:(long long)arg1;
- (void)_setLeadingOverlayWidth:(double)arg1;
- (void)_setTreatLeadingHiddenAsOverlaps:(bool)arg1;
- (bool)_treatLeadingHiddenAsOverlaps;
- (double)bounce;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isCollapsed;
- (bool)isEqual:(id)arg1;
- (bool)isLeadingVisible;
- (bool)isTrailingVisible;
- (double)leadingDragOffset;
- (bool)leadingOverlapsMain;
- (double)leadingWidth;
- (bool)matchesRequest:(id)arg1;
- (void)setBounce:(double)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setLeadingDragOffset:(double)arg1;
- (void)setLeadingWidth:(double)arg1;
- (void)setTrailingDragOffset:(double)arg1;
- (void)setTrailingOverlapsMain:(bool)arg1;
- (void)setTrailingWidth:(double)arg1;
- (void)set_keyboardAdjustment:(double)arg1;
- (id)stateRequest;
- (double)trailingDragOffset;
- (bool)trailingOverlapsMain;
- (double)trailingWidth;

@end
