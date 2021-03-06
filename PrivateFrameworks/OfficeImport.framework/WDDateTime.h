/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDDateTime : WDRun {
    NSDate * mDate;
    WDCharacterProperties * mProperties;
}

- (void)clearProperties;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)initWithParagraph:(id)arg1 date:(id)arg2;
- (id)properties;
- (int)runType;
- (void)setProperties:(id)arg1;

@end
