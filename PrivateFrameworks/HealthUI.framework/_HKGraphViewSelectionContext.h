/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKGraphViewSelectionContext : NSObject {
    NSArray * _selectedRangeBoundariesXValue;
    HKGraphSeries * _selectedSeries;
    NSArray * _selectionAreaMapping;
    long long  _selectionState;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _seriesSelectionRect;
    NSArray * _touchPoints;
}

@property (nonatomic, readonly) double minimumSelectionDistance;
@property (nonatomic, retain) NSArray *selectedRangeBoundariesXValue;
@property (nonatomic, retain) HKGraphSeries *selectedSeries;
@property (nonatomic, retain) NSArray *selectionAreaMapping;
@property (nonatomic) long long selectionState;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } seriesSelectionRect;
@property (nonatomic, retain) NSArray *touchPoints;

- (void).cxx_destruct;
- (double)minimumSelectionDistance;
- (id)selectedRangeBoundariesXValue;
- (id)selectedSeries;
- (id)selectionAreaMapping;
- (long long)selectionState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })seriesSelectionRect;
- (void)setSelectedRangeBoundariesXValue:(id)arg1;
- (void)setSelectedSeries:(id)arg1;
- (void)setSelectionAreaMapping:(id)arg1;
- (void)setSelectionState:(long long)arg1;
- (void)setSeriesSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTouchPoints:(id)arg1;
- (id)touchPoints;

@end
