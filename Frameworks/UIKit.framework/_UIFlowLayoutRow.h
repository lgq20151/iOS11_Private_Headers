/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFlowLayoutRow : NSObject {
    double  _availableSpace;
    bool  _complete;
    bool  _fixedItemSize;
    int  _horizontalAlignement;
    long long  _index;
    bool  _isValid;
    NSMutableArray * _items;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rowFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _rowSize;
    _UIFlowLayoutSection * _section;
    int  _verticalAlignement;
}

@property (nonatomic) double availableSpace;
@property (nonatomic) bool complete;
@property (nonatomic) bool fixedItemSize;
@property (nonatomic) long long index;
@property (nonatomic, readonly) NSMutableArray *items;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rowFrame;
@property (nonatomic) struct CGSize { double x1; double x2; } rowSize;
@property (nonatomic) _UIFlowLayoutSection *section;

- (void).cxx_destruct;
- (void)addItem:(id)arg1 atEnd:(bool)arg2;
- (double)availableSpace;
- (bool)complete;
- (id)copyFromSection:(id)arg1;
- (bool)fixedItemSize;
- (long long)index;
- (long long)indexOfNearestItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)init;
- (void)insertItem:(id)arg1 atIndex:(long long)arg2;
- (void)invalidate;
- (id)items;
- (void)layoutRow;
- (void)removeItemAtIndex:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rowFrame;
- (struct CGSize { double x1; double x2; })rowSize;
- (id)section;
- (void)setAvailableSpace:(double)arg1;
- (void)setComplete:(bool)arg1;
- (void)setFixedItemSize:(bool)arg1;
- (void)setIndex:(long long)arg1;
- (void)setRowFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRowSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSection:(id)arg1;
- (id)snapshot;

@end
