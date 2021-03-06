/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDAnnotation : WDRun {
    WDAnnotationData * mData;
    WDAnnotation * mOtherEndOfRangedAnnotation;
    WDCharacterRun * mReference;
    bool  mReferencePopertiesFixed;
    int  mType;
}

- (int)annotationType;
- (id)data;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)initWithParagraph:(id)arg1 type:(int)arg2;
- (id)otherEndOfRangedAnnotation;
- (id)owner;
- (id)reference;
- (bool)referencePropertiesFixed;
- (int)runType;
- (void)setDate:(id)arg1;
- (void)setOtherEndOfRangedAnnotation:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setReferencePropertiesFixed;
- (id)text;
- (void)useDataFromOtherEnd;

@end
