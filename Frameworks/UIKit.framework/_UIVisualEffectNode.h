/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIVisualEffectNode : NSObject {
    NSMutableArray * _filterEntries;
    NSDictionary * _options;
    NSMutableArray * _overlays;
    bool  _textShouldRenderWithTintColor;
    NSMutableArray * _underlays;
    NSMutableArray * _viewEffects;
}

@property (nonatomic, copy) NSArray *filterEntries;
@property (nonatomic, readonly, copy) NSDictionary *options;
@property (nonatomic, copy) NSArray *overlays;
@property (nonatomic) bool textShouldRenderWithTintColor;
@property (nonatomic, copy) NSArray *underlays;
@property (nonatomic, copy) NSArray *viewEffects;

+ (id)newTransitionNodeForStops:(id)arg1;

- (void).cxx_destruct;
- (void)addFilterEntry:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)addUnderlay:(id)arg1;
- (void)addViewEffect:(id)arg1;
- (id)copyForTransitionToNode:(id)arg1;
- (id)description;
- (id)filterEntries;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (id)options;
- (id)overlays;
- (void)setFilterEntries:(id)arg1;
- (void)setOverlays:(id)arg1;
- (void)setTextShouldRenderWithTintColor:(bool)arg1;
- (void)setUnderlays:(id)arg1;
- (void)setViewEffects:(id)arg1;
- (bool)textShouldRenderWithTintColor;
- (id)underlays;
- (id)viewEffects;

@end
