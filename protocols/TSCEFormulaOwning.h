/* made by EzioChiu.
 */

@protocol TSCEFormulaOwning <NSObject>

@required

- (void)beginRewriteForCalculationEngine:(TSCECalculationEngine *)arg1 spec:(TSCEFormulaRewriteSpec *)arg2;
- (void)invalidateForCalculationEngine:(TSCECalculationEngine *)arg1;
- (struct { bool x1; bool x2; bool x3; })recalculateForCalculationEngine:(TSCECalculationEngine *)arg1 formulaID:(struct { unsigned int x1 : 24; })arg2 isInCycle:(bool)arg3 hasCalculatedPrecedents:(bool)arg4;
- (void)rewriteForCalculationEngine:(TSCECalculationEngine *)arg1 formulaID:(struct { unsigned int x1 : 24; })arg2 rewriteSpec:(TSCEFormulaRewriteSpec *)arg3;
- (void)writeResultsForCalculationEngine:(TSCECalculationEngine *)arg1;

@end
