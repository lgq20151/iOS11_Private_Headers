/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXTextSource : NSObject {
    <SXTextSourceDataSource> * _dataSource;
    <SXTextStyleFontDescribing> * _defaultFontDescribing;
    NSMutableIndexSet * _deletedRangeOffsets;
    SXFontAttributesConstructor * _fontAttributeConstructor;
    NSMutableIndexSet * _insertedRangeOffsets;
    NSMutableIndexSet * _rangesExcludedOfParagraphSpacing;
    NSString * _string;
}

@property (nonatomic, readonly) <SXTextSourceDataSource> *dataSource;
@property (nonatomic, readonly) <SXTextStyleFontDescribing> *defaultFontDescribing;
@property (nonatomic, retain) NSMutableIndexSet *deletedRangeOffsets;
@property (nonatomic, readonly) SXFontAttributesConstructor *fontAttributeConstructor;
@property (nonatomic, retain) NSMutableIndexSet *insertedRangeOffsets;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, retain) NSMutableIndexSet *rangesExcludedOfParagraphSpacing;
@property (nonatomic, readonly) NSString *string;

- (void).cxx_destruct;
- (void)applyAdditionsOnTextTangierStorage:(id)arg1;
- (void)applyListStylingOnTextTangierStorage:(id)arg1 usingAttributesMap:(id)arg2;
- (void)applyStylingOnTextTangierStorage:(id)arg1;
- (id)attributesForTextStyle:(id)arg1 baseTextStyle:(id)arg2 onParagraphStyle:(id)arg3 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 resultingDropCapStyle:(id*)arg5 textResizer:(id)arg6;
- (id)characterStyleFromAttributes:(id)arg1 context:(id)arg2;
- (id)cleanString:(id)arg1;
- (id)dataSource;
- (id)defaultFontDescribing;
- (id)deletedRangeOffsets;
- (id)description;
- (id)fontAttributeConstructor;
- (id)fontFaceForTextDescribing:(id)arg1 inheritingFromTextStyle:(id)arg2;
- (id)initWithString:(id)arg1 dataSource:(id)arg2;
- (id)insertedRangeOffsets;
- (int)listLabelTypeForListType:(unsigned long long)arg1;
- (int)listNumberTypeForListType:(unsigned long long)arg1;
- (id)locale;
- (id)populateArray:(id)arg1 withValue:(id)arg2 forSize:(unsigned long long)arg3;
- (id)randomColorWithAlpha:(double)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeInBounds:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 maxLength:(unsigned long long)arg2;
- (id)rangesExcludedOfParagraphSpacing;
- (void)setDeletedRangeOffsets:(id)arg1;
- (void)setInsertedRangeOffsets:(id)arg1;
- (void)setRangesExcludedOfParagraphSpacing:(id)arg1;
- (id)string;

@end
