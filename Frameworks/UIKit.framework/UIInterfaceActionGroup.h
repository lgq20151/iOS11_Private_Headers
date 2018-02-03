/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInterfaceActionGroup : NSObject <NSCopying, UIInterfaceActionDisplayPropertyObserver> {
    NSArray * _actions;
    NSArray * _actionsBySection;
    struct CGSize { 
        double width; 
        double height; 
    }  _leadingImageLayoutSize;
    UIInterfaceAction * _preferredAction;
    NSString * _title;
    struct CGSize { 
        double width; 
        double height; 
    }  _trailingImageLayoutSize;
    UIInterfaceActionVisualStyle * _visualStyle;
    NSPointerArray * _weakDisplayPropertyObservers;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) NSArray *actionsBySection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } leadingImageLayoutSize;
@property (nonatomic, retain) UIInterfaceAction *preferredAction;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } trailingImageLayoutSize;
@property (getter=_visualStyle, setter=_setVisualStyle:, nonatomic, retain) UIInterfaceActionVisualStyle *visualStyle;
@property (nonatomic, readonly) NSPointerArray *weakDisplayPropertyObservers;

+ (id)actionGroupWithActions:(id)arg1;
+ (id)actionGroupWithActionsBySection:(id)arg1;
+ (bool)changedProperties:(id)arg1 containsAny:(id)arg2;

- (void).cxx_destruct;
- (void)_addActionGroupDisplayPropertyObserver:(id)arg1;
- (void)_beginObservingActions;
- (id)_deepCopyOfActionsBySection;
- (void)_endObservingActions;
- (void)_notifyObserversDidChangeActionProperty:(id)arg1;
- (void)_notifyObserversVisualStyleDidChange;
- (void)_performWithActionObservingDisabled:(id /* block */)arg1;
- (void)_reloadImageLayoutSizesUsingExistingActionImages;
- (void)_removeActionGroupDisplayPropertyObserver:(id)arg1;
- (void)_setVisualStyle:(id)arg1;
- (void)_updateActionImageLayoutSizes;
- (id)_visualStyle;
- (id)actions;
- (id)actionsBySection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithTitle:(id)arg1 actionsBySection:(id)arg2;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;
- (struct CGSize { double x1; double x2; })leadingImageLayoutSize;
- (id)preferredAction;
- (void)setLeadingImageLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredAction:(id)arg1;
- (void)setTrailingImageLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (struct CGSize { double x1; double x2; })trailingImageLayoutSize;
- (id)weakDisplayPropertyObservers;

@end
