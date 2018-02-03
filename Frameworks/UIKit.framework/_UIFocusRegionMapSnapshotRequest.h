/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusRegionMapSnapshotRequest : NSObject <NSCopying> {
    bool  _clipToSnapshotRect;
    unsigned long long  _focusHeading;
    UIFocusSystem * _focusSystem;
    UIView * _focusableRegionAncestorView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _focusedRect;
    bool  _includeFocusContainerGuides;
    bool  _includeFocusGuides;
    UIView * _rootView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _snapshotRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _viewSearchRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visualRepresentationMinimumArea;
}

@property (nonatomic) bool clipToSnapshotRect;
@property (nonatomic) unsigned long long focusHeading;
@property (nonatomic, retain) UIFocusSystem *focusSystem;
@property (nonatomic) UIView *focusableRegionAncestorView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } focusedRect;
@property (nonatomic) bool includeFocusContainerGuides;
@property (nonatomic) bool includeFocusGuides;
@property (nonatomic) UIView *rootView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } snapshotRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } viewSearchRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visualRepresentationMinimumArea;

+ (id)requestWithRootView:(id)arg1 focusSystem:(id)arg2;

- (void).cxx_destruct;
- (bool)clipToSnapshotRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)focusHeading;
- (id)focusSystem;
- (id)focusableRegionAncestorView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })focusedRect;
- (bool)includeFocusContainerGuides;
- (bool)includeFocusGuides;
- (id)initWithRootView:(id)arg1 focusSystem:(id)arg2;
- (id)rootView;
- (void)setClipToSnapshotRect:(bool)arg1;
- (void)setFocusHeading:(unsigned long long)arg1;
- (void)setFocusSystem:(id)arg1;
- (void)setFocusableRegionAncestorView:(id)arg1;
- (void)setFocusedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIncludeFocusContainerGuides:(bool)arg1;
- (void)setIncludeFocusGuides:(bool)arg1;
- (void)setRootView:(id)arg1;
- (void)setSnapshotRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewSearchRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisualRepresentationMinimumArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })snapshotRect;
- (id)takeSnapshot;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewSearchRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visualRepresentationMinimumArea;

@end
