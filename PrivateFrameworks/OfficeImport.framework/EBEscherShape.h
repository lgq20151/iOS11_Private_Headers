/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBEscherShape : ESDObject {
    CHDChart * mChart;
    NSData * mChartData;
    bool  mShowLegend;
}

- (id)chart;
- (id)chartData;
- (void)dealloc;
- (void)setChart:(id)arg1;
- (void)setChartData:(id)arg1;
- (void)setShowLegend:(bool)arg1;
- (bool)showLegend;

@end
