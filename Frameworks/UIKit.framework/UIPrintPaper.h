/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintPaper : NSObject {
    id  _internal;
    int  _paperOrientation;
}

@property (readonly) struct CGSize { double x1; double x2; } paperSize;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } printableRect;

+ (id)_defaultPKPaperForOuptutType:(long long)arg1;
+ (id)_defaultPaperForOutputType:(long long)arg1;
+ (id)_defaultPaperListForOutputType:(long long)arg1;
+ (id)_readyDocumentPaperListForPrinter:(id)arg1 withDuplexMode:(long long)arg2 contentSize:(struct CGSize { double x1; double x2; })arg3 scaleUpForRoll:(bool)arg4;
+ (id)_readyPaperListForPrinter:(id)arg1 withDuplexMode:(long long)arg2 forContentType:(long long)arg3 contentSize:(struct CGSize { double x1; double x2; })arg4;
+ (id)bestPaperForPageSize:(struct CGSize { double x1; double x2; })arg1 andContentType:(long long)arg2 withPapersFromArray:(id)arg3;
+ (id)bestPaperForPageSize:(struct CGSize { double x1; double x2; })arg1 withPapersFromArray:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithPrintKitPaper:(id)arg1;
- (id)_keywordForPDFMetadata;
- (id)_localizedMediaTypeName;
- (id)_localizedName;
- (int)_paperOrientation;
- (id)_pkPaper;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_printableRectForDuplex:(bool)arg1;
- (void)_setPaperOrientation:(int)arg1;
- (void)_updatePKPaper:(id)arg1;
- (id)description;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })paperSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })printRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })printableRect;

@end
