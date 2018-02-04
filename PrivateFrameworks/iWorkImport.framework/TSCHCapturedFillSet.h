/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHCapturedFillSet : TSCHFillSet {
    int  _numberOfThemeSeriesStyles;
    NSArray * _seriesStyles;
}

+ (id)capturedFillSetWithIdentifier:(id)arg1 seriesStyles:(id)arg2 numberOfThemeSeriesStyles:(unsigned long long)arg3;

- (unsigned long long)countOfDefinedSeriesForSeriesType:(id)arg1;
- (void)dealloc;
- (id)fillForSeriesIndex:(unsigned long long)arg1 seriesType:(id)arg2 context:(id)arg3;
- (id)initWithIdentifier:(id)arg1 seriesStyles:(id)arg2 numberOfThemeSeriesStyles:(unsigned long long)arg3;

@end