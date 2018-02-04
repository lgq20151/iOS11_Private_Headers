/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDData : NSObject {
    unsigned long long  mContentFormatId;
    unsigned long long  mDataValueIndexCount;
    CHDDataValuesCollection * mDataValues;
    CHDFormula * mFormula;
    EDResources * mResources;
}

+ (id)dataWithDataPointCount:(unsigned long long)arg1 resources:(id)arg2;
+ (id)dataWithResources:(id)arg1;

- (unsigned long long)averageDataPointDecimalCount;
- (id)contentFormat;
- (unsigned long long)contentFormatId;
- (unsigned long long)countOfCellsBeingReferenced;
- (unsigned long long)dataValueIndexCount;
- (id)dataValues;
- (void)dealloc;
- (id)description;
- (id)firstValueContentFormatWithWorkbook:(id)arg1;
- (id)formula;
- (id)initWithDataPointCount:(unsigned long long)arg1 resources:(id)arg2;
- (id)initWithResources:(id)arg1;
- (bool)isEmpty;
- (void)setContentFormat:(id)arg1;
- (void)setContentFormatId:(unsigned long long)arg1;
- (void)setDataValueIndexCount:(unsigned long long)arg1;
- (void)setFormula:(id)arg1 chart:(id)arg2;

@end