/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPickerColumnView : UIView <UIPickerTableViewContainerDelegate, UITableViewDataSource> {
    UIColor * __textColor;
    UIView * _bottomContainerView;
    UIPickerTableView * _bottomTable;
    bool  _isNoLongerInUse;
    double  _leftHitTestExtension;
    double  _middleBarHeight;
    UIView * _middleContainerView;
    UIPickerTableView * _middleTable;
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    }  _perspectiveTransform;
    UIPickerView * _pickerView;
    double  _rightHitTestExtension;
    double  _rowHeight;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _tableFrame;
    UIView * _topContainerView;
    UIPickerTableView * _topTable;
}

@property (getter=_textColor, setter=_setTextColor:, nonatomic, retain) UIColor *_textColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isNoLongerInUse;
@property (nonatomic) double leftHitTestExtension;
@property (nonatomic) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } perspectiveTransform;
@property (nonatomic) double rightHitTestExtension;
@property (nonatomic) double rowHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } selectionBarRect;
@property (nonatomic, readonly) long long selectionBarRow;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allVisibleCells;
- (void)_centerTableInContainer:(id)arg1;
- (bool)_containsTable:(id)arg1;
- (id)_createContainerViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_createTableViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 containingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)_horizontalBiasForEndTables;
- (void)_moveTableViewIfNecessary:(id)arg1 toContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)_pickerTableViewDidChangeContentOffset:(id)arg1;
- (bool)_pointLiesWithinEffectiveTableBounds:(struct CGPoint { double x1; double x2; })arg1;
- (id)_preferredTable;
- (bool)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(bool)arg2;
- (void)_sendCheckedRow:(long long)arg1 inTableView:(id)arg2 checked:(bool)arg3;
- (void)_setTextColor:(id)arg1;
- (bool)_soundsEnabled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_tableFrame;
- (id)_textColor;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_transformForTableWithPerspectiveTranslationX:(double)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_transformForTableWithTranslationX:(double)arg1;
- (bool)_usesCheckSelection;
- (id)_visibleCellClosestToPoint:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_visibleGlobalRows;
- (void)beginUpdates;
- (id)cellForRowAtIndexPath:(id)arg1;
- (void)endUpdates;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 tableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 middleBarHeight:(double)arg3 rowHeight:(double)arg4 pickerView:(id)arg5 transform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg6;
- (bool)isNoLongerInUse;
- (bool)isRowChecked:(long long)arg1;
- (double)leftHitTestExtension;
- (void)markAsNoLongerInUse;
- (long long)numberOfRowsInSection:(long long)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })perspectiveTransform;
- (void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(long long)arg2 to:(long long)arg3;
- (void)reloadData;
- (double)rightHitTestExtension;
- (double)rowHeight;
- (bool)selectRow:(long long)arg1 animated:(bool)arg2 notify:(bool)arg3;
- (bool)selectRow:(long long)arg1 animated:(bool)arg2 notify:(bool)arg3 updateChecked:(bool)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBarRect;
- (long long)selectionBarRow;
- (void)setAllowsMultipleSelection:(bool)arg1;
- (void)setIsNoLongerInUse:(bool)arg1;
- (void)setLeftHitTestExtension:(double)arg1;
- (void)setPerspectiveTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setRightHitTestExtension:(double)arg1;
- (void)setRowHeight:(double)arg1;
- (void)setSelectionBarRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
